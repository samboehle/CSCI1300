// CSCI1300 Spring 2020
// Author: Samuel Boehle
//Recitation: 101 - James Watson
//Project 2 - Task #4

#include <iostream>
#include <string>
using namespace std;
#include "Library.h"

int main()
{
    int choice = 0;
    string filename;
    int output;
    string username;
    int min;
    string title;
    int rating;
    bool quit = false;


    Library library;

    //main loop
    while(!quit)
    {
        cout << "Select a numerical option:\n======Main Menu=====\n1. Read books\n2. Read ratings\n3. View ratings\n4. Print all books\n5. Update a rating\n6. Add a user\n7. Get recommendations\n8. Quit" << endl;
        cin >> choice;
        

        
        if(choice == 1)
        {
            cout << "Enter a book file name:" << endl;
            cin >> filename;

            //asigning output to find the return value
            output = library.readBooks(filename);

            if(output == -1)
            {
                cout << "No books saved to the library." << endl;
            }
            else
            {
                cout << "Total books in the library: " << output << endl;
            }
        }
        if(choice == 2)
        {
            cout << "Enter a user file name:" << endl;
            cin >> filename;

            output = library.readRatings(filename);

            if(output == -1)
            {
                cout << "No users saved to the library." << endl;
            }
            else
            {
                cout << "Total users in the library: " << output << endl;
            }
        }
        if(choice == 3)
        {
            cout << "Enter a user name:" << endl;
            cin >> username;

            cout << "Enter a minimum rating:" << endl;
            cin >> min;
            
            library.viewRatings(username, min);
        }
        if(choice == 4)
        {    
            library.printAllBooks();
        }
        if(choice == 5)
        {
            cout << "Enter a user name:" << endl;
            cin >> username;
            cout << "Enter a book title:" << endl;
            cin.ignore();
            //using getline since book title is more than 1 word
            getline(cin, title);
            cout << "Enter a new rating:" << endl;
            cin >> rating;

            library.updateRating(username, title, rating);
        }
        if(choice == 6)
        {
            cout << "Enter a user name:" << endl;
            cin >> username;

            library.addUser(username);
        }
        if(choice == 7)
        {
            cout << "Enter a user name:" << endl;
            cin >> username;

            library.getRecommendations(username);
        }
        if(choice == 8)
        {
            cout << "Good bye!" << endl;
            quit = true;
        }
        //error handling
        if(choice < 1 || choice > 8)
        {
            cout << "Invalid option." << endl;
        }
    }
    return 0;
}