#include <iostream>
#include <string>
using namespace std;

// CSCI1300 Spring 2020
// Author: Samuel Boehle
//Recitation: 101 - James Watson
//Project #1 - Problem #3

//I used a reverence to a string to be able to use the toupper() funciton on a string
//I used the array of the string, and then iterated through it with the to upper function to change it from lower to uppercase.

string toUpper( string& input)
{
    string output;
    string current;
    int i = 0;
    
    for(i= 0; i < input.length; i++)
    {
        input[i] = toupper(input[i]);
        
    }

    return input;
}