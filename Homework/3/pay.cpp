// CSCI1300 Spring 2020
// Author: Samuel Boehle
//Recitation: 101 - James Watson
//Homework #3 - Problem #2

//In this program I took input of all data then calculated overtime pay. It then goes through an if else statement to determine if it needs to account for overtime.


#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double hours;
    double pay_rate;
    double overtime_rate;
    double total_pay;

    cout << "Enter the number of hours worked" << endl;
    cin >> hours;

    cout << "Enter an hourly pay rate" << endl;
    cin >> pay_rate;

    overtime_rate = pay_rate * 1.5;

    if( hours <= 0 || pay_rate <= 0)
    {
        cout << "Invalid input" << endl;
        return 1;
    }

    else
    {
        if(hours <= 40)
        {
            total_pay = pay_rate * hours;
        }

        else
        {
            total_pay = (40 * pay_rate) + (hours - 40) * overtime_rate;
        }

        cout << "Paycheck: " << setprecision(2) << fixed << total_pay << endl;
    }
    return 0;
}