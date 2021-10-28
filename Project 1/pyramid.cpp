// CSCI1300 Spring 2020
// Author: Samuel Boehle
//Recitation: 101 - James Watson
//Project #1 - Problem #1

//Created a funciton taking in the data, then did the calculatons on it.
//Added error perameters making sure data was correct.

#include <iostream>
#include <cmath>
using namespace std;

double surfaceArea(double base_length, double slant_height)
{
    double surface_area;
    
    surface_area = (2 * base_length * slant_height) + pow(base_length, 2);
    
    if(base_length <= 0 || slant_height <= 0)
    {
        return -1;
    }

    else
    {
        return surface_area;
    }
    
    
}

//Main function using the function above.

int main()
{
    double base_length, slant_height;

    cout << "Enter the base length: " << endl;
    cin >> base_length;

    cout << "Enter the slant height: " << endl;
    cin >> slant_height;


    if(surfaceArea(base_length, slant_height) == -1)
    {
        cout << "Invalid values" << endl;
    }
        
    else
    {
       cout << "The surface area: " << surfaceArea(base_length, slant_height) << endl;

    }

    return 0;
}