// CSCI1300 Spring 2020
// Author: Samuel Boehle
//Recitation: 101 - James Watson
//Homework #5 - Problem #2

//for average I found sum of the array
//for min and max i just iterated through and if current array value was greater or less i set that as min or max


#include <iostream>
#include <iomanip>
using namespace std;

void stats(double data[], int elements)
{
    double avg, sum;

    double min = data[0];
    double max = data[0];

    double current1, current2;

    for(int i = 0; i < elements; i++)
    {
        sum = sum + data[i];
    }

    avg = sum / elements;

    for(int i = 0; i < elements; i++)
    {
        current1 = data[i];
        
        if(current1 < min)
        {
            min = current1;
        }
    }

    for(int i = 0; i < elements; i++)
    {
        current2 = data[i];
        
        if(current2 > max)
        {
            max = current2;
        }
    }

    cout << "Min: " << fixed << setprecision(2) << min << endl;
    cout << "Max: " << fixed << setprecision(2) << max << endl;
    cout << "Avg: " << fixed << setprecision(2) << avg << endl;


}