// CSCI1300 Spring 2020
// Author: Samuel Boehle
//Recitation: 101 - James Watson
//Homework #4 - Problem #1

//I used a while loop and then integrated by 2 until it was the number the user enterd to add up all even numbers.


#include <iostream>

using namespace std;

int main()
{
    int end_number;

    cout << "Enter a positive number:" << endl;
    cin >> end_number;

    int i = 0;
    int sum = 0;
    
    while(i <= end_number)
    {
        sum = sum + i;
        i = i + 2;
    }

    cout << "Sum: " << sum << endl;

    return 0;
}