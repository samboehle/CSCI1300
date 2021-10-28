// CSCI1300 Spring 2020
// Author: Samuel Boehle
//Recitation: 101 - James Watson
//Homework #2 - Problem #5


#include <iostream>
#include <iomanip>

using namespace std;

main()
{
    double fahrenheit;
    double celsius;

    cout << "Enter a temperature in Fahrenheit:" << endl;
    cin >> fahrenheit;

    celsius = (5.0/9.0) * (fahrenheit - 32);

    

    cout << fixed << setprecision(2) << "The temperature " << fahrenheit << " degrees Fahrenheit is " << fixed << setprecision(2) << celsius << " degrees Celsius." << endl;

    return 0; 
}