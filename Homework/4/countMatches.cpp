// CSCI1300 Spring 2020
// Author: Samuel Boehle
//Recitation: 101 - James Watson
//Homework #4 - Problem #5

//I used a for loop and string operators in order to find if a slice of the user input string matched with the substring the user wanted to see matched


#include <iostream>
#include <string>
using namespace std;

int main()
{
    string user_input;
    string user_string;
    int occurrence = 0;

    cout << "Enter the search string:" << endl;
    cin >> user_input;
    
    cout << "Enter the substring to be searched:" << endl;
    cin >> user_string;

    for (int i= 0; i < user_input.length(); i++)
    {
        string ch = user_input.substr(i, user_string.length());
        if (ch == user_string)
        {
            occurrence++;
        }
    }

    cout << "Number of occurrences: " << occurrence << endl;

    return 0;
}