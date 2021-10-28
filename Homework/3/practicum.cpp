// CSCI1300 Spring 2020
// Author: Samuel Boehle
//Recitation: 101 - James Watson
//Homework #3 - Problem #1

//In this problem I took inputs of all practicum scores and then averaged them, and then went through an if and then.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double practicum_1;
    double practicum_2;
    double practicum_3;
    double practicum_average;

    cout << "Enter practicum 1 score:" << endl;
    cin >> practicum_1;

    cout << "Enter practicum 2 score:" << endl;
    cin >> practicum_2;

    cout << "Enter practicum 3 score:" << endl;
    cin >> practicum_3;

    practicum_average = (practicum_1 + practicum_2 + practicum_3) / 3;

    cout << "Practicum average: " << setprecision(2) << fixed << practicum_average << endl;

    if (practicum_average >= 67)
    {
        cout << "You have a passing practicum average." << endl;
    }

    else
    {
        cout << "You can retake practicums during the final." << endl;
    }

    return 0;

}