// CSCI1300 Spring 2020
// Author: Samuel Boehle
//Recitation: 101 - James Watson
//Project #1 - Problem #2

#include <iostream>
#include <cmath>
using namespace std;

//Function takes in the data and then passes it through if statements to determine if they data is bad.
//In the if statements I used a flagging system to know if the function should return 1 or keep going.

double displacement(double velocity_i, double velocity_f, double deceleration)
{
    double displacement;
    int flag = 0;
    if(velocity_i < 0 || velocity_f < 0)
    {
        cout << "Velocity should be greater than zero." << endl;
       flag = 1;
    }
    if(deceleration == 0)
    {
        cout << "No brakes were applied." << endl;
        flag = 1;
    }
    if(deceleration < 0)
    {
        cout << "The vehicle is speeding up." << endl;
        flag = 1;
    }
    if(velocity_f > velocity_i)
    {
        cout << "Error in acceleration values." << endl;
        flag = 1;
    }

    if(flag == 1)
    {
        return 0;
    }

    else 
    {
        displacement = (pow(velocity_f, 2) - pow(velocity_i, 2) ) / (-2 * deceleration);

        return displacement;
    }
}