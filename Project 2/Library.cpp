// CSCI1300 Spring 2020
// Author: Samuel Boehle
//Recitation: 101 - James Watson
//Project 2 - Task #3

#include <string>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
#include "Library.h"

//split function
int split(string main, char splitter, string array[], int size)
{
    main += splitter;
    char current;
    int place = 0;


    for(int i = 0; i < main.length(); i++)
    {
        
        if(main[i] != splitter)
        {
            array[place] += main[i];
        }
        else if(main[i] == splitter)
        {
            place++;
        }
    }
    

    return place;

}


Library::Library()
{
    numBooks = 0;
    numUsers = 0;
}

int Library::getNumBooks()
{
    return numBooks;
}

int Library::getNumUsers()
{
    return numUsers;
}

int Library::readBooks(string filename)
{
    //opening file
    ifstream myfile;
    myfile.open(filename);
    if(myfile.fail())
    {
        return -1;
    }

    string line;
    string current[2];
    //opening file and then asigning the data to book class
    while(getline(myfile, line))
    {
        if(numBooks >= 50)
        {
            return numBooks;
        }

        fill_n(current, 2, "");
        split(line, ',', current, 2);
        
        books[numBooks].setAuthor(current[0]);
        books[numBooks].setTitle(current[1]);
        numBooks++;
    }
    return numBooks;
}

int Library::readRatings(string filename)
{
    ifstream myfile;
    myfile.open(filename);
    if(myfile.fail())
    {
        return -1;
    }

    string line;
    int n = 0;
    string current[100];
    while(getline(myfile, line))
    {
        //doing error handling
        if(numUsers >= 100)
        {
            return numUsers;
        }
        
        //tell what line to see if it needs to split line or directly asign it to the array
        if(n % 2 == 0)
        {
            users[numUsers].setUsername(line);
        }

        else
        {
            fill_n(current, 100, "");
            split(line, ',', current, 100);

            for(int i = 0; i < 100; i++)
            {
                if(current[i] != "")
                {
                    users[numUsers].setRatingAt(i, stoi(current[i]));
                }   
            }
            numUsers++;
        }
        n++;
    }
    return numUsers;


}

void Library::viewRatings(string name, int min)
{
    string actual_name = name;
    int userplace  = -1;
    int highestr = 0;
    int flag = 1;
    
    //making name lowercase
    for(int i = 0; i < name.length(); i++)
    {
        name[i] = tolower(name[i]);
    }
    //tell if library has been initialized
    if(books[0].getTitle() == "" || users[0].getUsername() == "")
    {
        cout << "The library has not been fully initialized." << endl;
    }
    else
    {
        //getting where the user is in the array
        for(int i = 0; i < 100; i++)
        {
            if(name == users[i].getUsername())
            {
                userplace = i;
            }
        }
        
        //if userplace == -1 then we know user doen't exist
        if(userplace == -1)
        {
            cout << actual_name << " does not exist." << endl;
        }
        else
        {
            //finding highest rating to see if the user hasnt rated above the min
            for(int i = 0; i < numBooks; i++)
            {
                if(users[userplace].getRatingAt(i) > highestr)
                {
                    highestr = users[userplace].getRatingAt(i);
                }

            }

            if(highestr < min)
            {
                cout << actual_name << " has not rated any books with " << min << " or higher." << endl;
            }
            else
            {
                //outputing books above that rating
                cout << "Here are the books that " << actual_name << " rated" << endl;
                for(int i = 0; i < numBooks; i++)
                {
                    if(users[userplace].getRatingAt(i) >= min)
                    {
                        cout << "Title : " << books[i].getTitle() << endl;
                        cout << "Rating : " << users[userplace].getRatingAt(i) << endl;
                        cout << "-----" << endl;
                    }
                }
            }
                
        }
    }

    

}

void Library::printAllBooks()
{
    double c_average;
    double c_total = 0;
    double skipped = 0;
    if(books[0].getTitle() == "" || users[0].getUsername() == "")
    {
        cout << "The library has not been fully initialized." << endl;
    }
    else
    {
        //nested for loop to go through books and then users
        for(int i = 0; i < numBooks; i++)
        {
            for(int j = 0; j < numUsers; j++)
            {
                if(users[j].getRatingAt(i) == 0)
                {
                    skipped++;
                    continue;
                }
                //adding up all of the ratings for that book
                c_total = c_total + users[j].getRatingAt(i);
                
            }
            c_average = c_total / (numUsers - skipped);

            cout << "(" << setprecision(2) << fixed << c_average << ") " << books[i].getTitle() << " by " << books[i].getAuthor() << endl;
            c_average = 0;
            c_total = 0;
            skipped = 0;

        }
    }
    


}

void Library::addUser(string name)
{
    string actual_name = name;
    for(int i = 0; i < name.length(); i++)
    {
        name[i] = tolower(name[i]);
    }
    int userplace = -1;
    if(numUsers >= 100)
    {
        cout << "The library is already full. " << actual_name << " was not added." << endl;
    }
    else if(numUsers == 0)
    {
        users[numUsers].setUsername(name);
        cout << "Welcome to the library " << actual_name << endl;
        numUsers++;
    }
    else
    {
        for(int i = 0; i < numUsers; i++)
        {
            if(name == users[i].getUsername())
            {
                userplace = i;
            }

        }
        
        if(userplace != -1)
        {
            cout << actual_name << " already exists in the library." << endl;
        }
        else
        {
            //asigning to array after checking
            users[numUsers].setUsername(name);
            cout << "Welcome to the library " << actual_name << endl;
            numUsers++;
        }
    }
}

void Library::updateRating(string name, string n_title, int n_rate)
{
    string actual_name = name;
    string actual_book = n_title;
    int userplace = -1;
    int bookplace = -1;
    for(int i = 0; i < name.length(); i++)
    {
        name[i] = tolower(name[i]);
    }

    for(int i = 0; i < n_title.length(); i++)
    {
        n_title[i] = tolower(n_title[i]);
    }
    string current_title;
    
    if(books[0].getTitle() == "" || users[0].getUsername() == "")
    {
        cout << "The library has not been fully initialized." << endl;
    }
    else
    {
        for(int i = 0; i < numUsers; i++)
        {
            if(name == users[i].getUsername())
            {
                userplace = i;
            }
        }
        if(userplace == -1)
        {
            cout << actual_name << " does not exist." << endl;
        }
        else
        {
            //checking rate
            if(n_rate < 0 || n_rate > 5)
            {
                cout << n_rate << " is not valid." << endl;
            }
            else
            {
                //getting where title is
                for(int i = 0; i < numBooks; i++)
                {
                    current_title = books[i].getTitle();
                    for(int i = 0; i < current_title.length(); i++)
                    {
                        current_title[i] = tolower(current_title[i]);
                    }
                    
                    if(n_title == current_title)
                    {
                        bookplace = i;
                    }
                }
                if(bookplace == -1)
                {
                    cout << actual_book << " does not exist." << endl;
                }
                else
                {
                    users[userplace].setRatingAt(bookplace, n_rate);
                    cout << "The rating has been updated." << endl;
                }
            }
        }
    }

}

void Library::getRecommendations(string name)
{
    
    string actual_name = name;
    int userplace = -1;

    int current_s = 0;
    int low = 999999;
    int match;
    int checker = 0;
    
    for(int i = 0; i < name.length(); i++)
    {
        name[i] = tolower(name[i]);
    }
    
    if(books[0].getTitle() == "" || users[0].getUsername() == "")
    {
        cout << "The library has not been fully initialized." << endl;
    }
    else
    {
    
        for(int i = 0; i < numUsers; i++)
        {
            if(name == users[i].getUsername())
            {
                userplace = i;
            }
        }
        if(userplace == -1)
        {
            cout << actual_name << " does not exist." << endl;
        }
        else
        {     
            //this for loops finds the most similar users
            for(int i = 0; i < numUsers; i++)
            {
                checker = 0;
                if(i == userplace)
                {
                    continue;
                }
                
                //checker to see if the user hasnt rated any books
                for(int j = 0; j < numBooks; j++)
                {
                    checker = checker + users[i].getRatingAt(j);
                }

                //caclultating the sim score
                for(int j = 0; j < numBooks; j++)
                {
                    current_s = current_s + pow(users[userplace].getRatingAt(j) - users[i].getRatingAt(j), 2);
                    
                }

                if(current_s < low && checker != 0)
                {
                    low = current_s;
                    match = i;

                }
                
                current_s = 0;
            }

            int books_p = 0;
            int booksb[5];

            //this loop finds what books are recoended
            for(int i = 0; i < numBooks; i++)
            {
                if(books_p >= 5)
                {
                    continue;
                }
                
                //checking to see if the user hasn't rated it
                if(users[userplace].getRatingAt(i) != 0)
                {
                    continue;
                }

                if(users[match].getRatingAt(i) < 3)
                {
                    continue;
                }

                //array storing the recomended books
                booksb[books_p] = i;
                books_p++;
            }

            if(books_p == 0)
            {
                cout << "There are no recommendations for " << actual_name << " at present." << endl;
            }
            else
            {
                cout << "Here is the list of recommendations" << endl;
                for(int i = 0; i < books_p; i++)
                {
                    cout << books[booksb[i]].getTitle() << " by " << books[booksb[i]].getAuthor() << endl;
                }
            }
            


        }
    }   



}
