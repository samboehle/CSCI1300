// CSCI1300 Spring 2020
// Author: Samuel Boehle
//Recitation: 101 - James Watson
//Homework #8 - Problem #1

#include <iostream>
#include <string>
using namespace std;

string decimalToBinaryIterative(int num)
{
    string final = "";
    int remainder;
    
    if(num == 0)
    {
        return "0";
    }
    //loop to go through until it gets to 0
    while(num != 0)
    {
        remainder = num % 2;
        num = num / 2;

        final.insert(0, to_string(remainder));
    }

    return final;
}

int main()
{
    int num;
    cin >> num;

    cout << decimalToBinaryIterative(num) << endl;

    return 0;
}