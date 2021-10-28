// CSCI1300 Spring 2020
// Author: Samuel Boehle
//Recitation: 101 - James Watson
//Homework #5 - Problem #4

//Used a nested for loop to loop through each row, and colum to fund max in that row.

#include <iostream>
using namespace std;

int maxSum(int array[][10], int rows)
{
    int current;
    int row_max = array[0][0];
    int total = 0;
    
    for(int i= 0; i < rows; i++)
    {
        for(int j = 0; j < 10; j++)
            {
                current = array[i][j];
                if(current > row_max)
                {
                    row_max = current;
                }
            }
        total = total + row_max;
        row_max = array[i + 1][0];

    }

    return total;

}