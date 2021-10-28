// CSCI1300 Spring 2020
// Author: Samuel Boehle
//Recitation: 101 - James Watson
//Homework #2 - Problem #3


#include <iostream>

using namespace std;

main ()
{
   
    double carnot;

    double cold_receiver;
    double hot_receiver;

    cout << "Enter cold reservoir temperature:" << endl;
    cin >> cold_receiver;

    cout << "Enter hot reservoir temperature:" << endl;
    cin >> hot_receiver;

    carnot = 1 - cold_receiver / hot_receiver;

    cout << "Carnot efficiency: " << carnot << endl;

    return 0;
}