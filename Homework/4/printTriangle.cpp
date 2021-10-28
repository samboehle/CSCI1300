// CSCI1300 Spring 2020
// Author: Samuel Boehle
//Recitation: 101 - James Watson
//Homework #4 - Problem #6

//I used nested loops, the first for loop "decides" how many rows there are.
//The nested for loop then does how many letters are needed and integrates by one character using ascii

#include <iostream>
using namespace std;

int main()
{
    int height;

    string alphebet = "abcdefghijklmnopqrstubwxyz";

    cout << "Enter the height:" << endl;
    cin >> height;

    int letter = 97;

    for (int i = 0; i < height; i++)
    {
        for(int x = height; x > i; x--)
        {
            cout << char(letter);
            if(letter >= 122)
            {
                letter = 97;
            }
            else
            {
                letter++;
            }
        }
        cout << "\n";
    }




    return 0;
}