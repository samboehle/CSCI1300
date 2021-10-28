// CSCI1300 Spring 2020
// Author: Samuel Boehle
//Recitation: 101 - James Watson
//Homework #2 - Problem #4


#include <iostream>
#include <cmath>

using namespace std;

main()
{
    double radius;

    double volume;
    double surface_area;

    cout << "Enter a radius:" << endl;
    cin >> radius;

    volume = (4.0/3.0) * M_PI * pow(radius, 3);
    surface_area = 4 * M_PI * pow(radius, 2);

    cout << "Volume: " << volume << endl << "Surface area: " << surface_area << endl;

    return 0;
}