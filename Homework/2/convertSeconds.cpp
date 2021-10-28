// CSCI1300 Spring 2020
// Author: Samuel Boehle
//Recitation: 101 - James Watson
//Homework #2 - Problem #6


#include <iostream>

using namespace std;

main()
{
    int user_seconds;

    int remaining_seconds;

    int hours;
    int minutes;
    int seconds;
    
    cout << "Enter a number of seconds:" << endl;
    cin >> user_seconds;

    //In order to find hours, minutes, seconds I used a modulo to take a remainder and pass it down through each step.

    hours = user_seconds / 3600;
    remaining_seconds = user_seconds % 3600;


    minutes = remaining_seconds / 60;
    remaining_seconds = remaining_seconds % 60;

    seconds = remaining_seconds;


    cout << hours << " hour(s) " << minutes << " minute(s) " << seconds << " second(s) " << endl;

    return 0;

}