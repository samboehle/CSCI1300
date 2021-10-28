// CSCI1300 Spring 2020
// Author: Samuel Boehle
//Recitation: 101 - James Watson
//Homework #6 - Problem #4

//I filled two arrays, one with the words, other with the cases. I used iterators to keep track of the data so I can reference the same word and the instances of that word with the iterator.
//I used for loop to determine of word was a duplicate
//I used a comparison for loop to calculate the order of the highest amount of instances and so on. I used the psuedo code sent in an email from a TA to make this comparison program.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

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


int main()
{
    string filename;
    cout << "Enter a filename:" << endl;
    cin >> filename;

    ifstream myfile;
    myfile.open(filename);

    if(myfile.fail())
    {
        cout << "Could not open the file." << endl;
        return -1;
    }
    string line;
    string current[200];
    string words[500];
    int cases[500];
    int flag;
    int j = 0;
    int place;
    int unique_words = 0;
    while(getline(myfile, line))
    {
        //cout << line << endl;
        fill_n(current, 200, "");
        split(line, ' ', current, 200);

        for(int i = 0; i < 200; i++)
        {
            if(current[i] == "")
            {
                continue;
            }
            for(int k = 0; k < 500; k++)
            {
                if(words[k] == current[i])
                {
                    flag = 1;
                    place = k;
                }
            }
            if(flag == 0)
            {
                words[j] = current[i];
                cases[j]++;
                unique_words++;
            }
            if(flag == 1)
            {
                cases[place]++;
            }
            j++;

            flag = 0;
        }

    }

    int n;

    cout << "Enter the value of n:" << endl;
    cin >> n;

    cout << endl;

    int current_max = 0;
    int place_m;
    int upper = j +1;
    for(int i = 0; i < n; i++)
    {
        for(int i = 0; i < j; i++)
        {
            if(cases[i] > current_max && cases[i] < upper)
            {
                
                current_max = cases[i];
                place_m = i;
            }

        }
        cout << cases[place_m] << " - " << words[place_m] << endl;
        upper = current_max;
        current_max = 0;
    }
    cout << endl;
    cout << "Unique words: " << unique_words << endl;
    cout << "Total words: " << j << endl;

    /*for(int i = 0; i < j; i++)
    {
        cout << words[i] << endl;
        cout << cases[i] << endl;
    }*/

    return 0;
}