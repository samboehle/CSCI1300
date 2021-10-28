// CSCI1300 Spring 2020
// Author: Samuel Boehle
//Recitation: 101 - James Watson
//Homework #5 - Problem #1


//Used for loops to loop through array and print
//For numbers i just added 1 for each loop
//for characters I used ascii


#include <iostream>
#include <string>
using namespace std;

int main()
{
    int counter = 65;
    int counter2 = 97;

    double temps[10];
    string colors[5] = {"Red", "Blue", "Green", "Cyan", "Magenta"};
    int sequence[100];
    char letters[52];

    for(int i = 0; i < 10; i++)
    {   
        temps[i] = -459.67;
    }

    for(int i = 0; i < 100; i++)
    {
        sequence[i] = i + 1;
    }

    for(int i = 0; i < 52; i = i + 2)
    {
        letters[i] = char(counter);
        counter++;
    }
    
    for(int i = 1; i < 52; i = i + 2)
    {
        letters[i] = char(counter2);
        counter2++;
    }

    

    for(int i = 0; i < 10; i++)
    {
        cout << temps[i]  << endl;
    }

    cout << endl;

    for(int i = 0; i < 5; i++)
    {
        cout << colors[i] << endl;
    }
    cout << endl;
    for(int i = 0; i < 100; i++)
    {
        cout << sequence[i] << endl;
    }
    cout << endl;
    for(int i = 0; i < 52; i= i + 2)
    {
        cout << letters[i] << " " << letters[i + 1] << endl;
    }




    return 0;
}