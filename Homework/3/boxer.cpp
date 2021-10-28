// CSCI1300 Spring 2020
// Author: Samuel Boehle
//Recitation: 101 - James Watson
//Homework #3 - Problem #4

//In this program I used conditional statements to determine if the boxers weights were in descedning, or ascending order.


#include <iostream>
#include <string>

using namespace std;

int main()
{
    int boxer_1;
    int boxer_2;
    int boxer_3;

    cout << "Enter boxers' weights" << endl;

    cin >> boxer_1 >> boxer_2 >> boxer_3;




    if(boxer_1 < boxer_2 && boxer_2 < boxer_3)
    {
        cout << "Ascending order" << endl;
    }

    else if(boxer_1 > boxer_2 && boxer_2 > boxer_3)
    {
        cout << "Descending order" << endl;
    }

    else
    {
        cout << "Neither" << endl;
    }
    
    return 0;
}