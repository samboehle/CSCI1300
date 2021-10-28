// CSCI1300 Spring 2020
// Author: Samuel Boehle
//Recitation: 101 - James Watson
//Homework #4 - Problem #2

//In this program I used a while loop, and then an if else statement to decide what operations to perform on the current number.


#include <iostream>

using namespace std;

int main()
{
    int n_current;

    cout << "Enter a positive number:" << endl;
    cin >> n_current;

    cout << n_current << endl;


    while(n_current > 1)
    {
        if(n_current % 2 == 0)
        {
            n_current = n_current / 2;
        }

        else
        {
            n_current = (3 * n_current) + 1;
        }

        cout << n_current << endl;
    }



    return 0;
}
