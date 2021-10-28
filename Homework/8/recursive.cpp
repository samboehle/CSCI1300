// CSCI1300 Spring 2020
// Author: Samuel Boehle
//Recitation: 101 - James Watson
//Homework #8 - Problem #1

#include <iostream>
#include <string>
using namespace std;

//2 functions since its easier to work with integers
int func(int num)
{
    int remainder;
    if(num == 0)
    {
        return 0;
    }
    else
    {
        //recusive to add remainder to 10 * the next recursion
        remainder = num % 2;
        return remainder + 10 * func(num / 2);
    }
    
}

//converting to string
string decimalToBinaryRecursive(int num)
{
    return to_string(func(num));
}

int main()
{
    int num;
    cin >> num;

    cout << decimalToBinaryRecursive(num) << endl;

    return 0;
}