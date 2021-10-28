// CSCI1300 Spring 2020
// Author: Samuel Boehle
//Recitation: 101 - James Watson
//Homework #3 - Problem #5

//In this program I decidied if it was a leap year by using lots of operators. I knew the data did not have to go through the leap year if statement if the month was not 2.


#include <iostream>

using namespace std;

int main()
{
    int year;
    int month;
    int days;

    cout << "Enter a year:" << endl;
    cin >> year;

    cout << "Enter a month:" << endl;
    cin >> month;




    if(month < 1 || month > 12)
    {
        cout << "Invalid month" << endl;
        return 0;
    }

    else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        days = 31;
    }

    else if(month == 4 || month == 6 || month == 9 || month == 11)
    {
        days = 30;
    }


//Leap year calculations
    else if(month == 2)
    {
        if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        {
            days = 29;
        }

        if(year < 1582 && year % 4)
        {
            days = 29;
        }

        else
        {
            days = 28;
        }

    }

    cout << days << " days" << endl;

    return 0;
}