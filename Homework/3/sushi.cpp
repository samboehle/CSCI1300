// CSCI1300 Spring 2020
// Author: Samuel Boehle
//Recitation: 101 - James Watson
//Homework #3 - Problem #3

//I used a lot of if statements to make a lot of cases of the number of sushi in order to know what discount.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double sushi_amount;

    double sushi_price;

    cout << "Enter the number of sushi:" << endl;
    cin >> sushi_amount;

    sushi_price = sushi_amount * 1.99;

    if (sushi_amount <= 0)
    {
        cout << "Invalid input" << endl;
        return 0;
    }

    else if ( 10 <= sushi_amount && sushi_amount <= 19 )
    {
        sushi_price = sushi_price * .9;
    }

    else if ( 20 <= sushi_amount && sushi_amount <= 49 )
    {
        sushi_price = sushi_price * .85;
    }

    else if ( 50 <= sushi_amount && sushi_amount <= 99 )
    {
        sushi_price = sushi_price * .8;
    }

    else if ( sushi_amount >= 100)
    {
        sushi_price = sushi_price * .75;
    }

    cout << "Total price: $" << setprecision(2) << fixed << sushi_price << endl;

return 0;


}