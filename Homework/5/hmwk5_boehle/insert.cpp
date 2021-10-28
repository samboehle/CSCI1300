// CSCI1300 Spring 2020
// Author: Samuel Boehle
//Recitation: 101 - James Watson
//Homework #5 - Problem #3

//Found where it needed to be inserted then i took array after, and put the new number in, then added back of array back on




#include <iostream>
using namespace std;

int insert(int array[], int stored, int size, int new_num)
{
    int position;
    if(stored == size)
    {
        return stored;
    }

    for(int i = 1; i < stored; i++)
    {
        if(new_num > array[i -1] && new_num <= array[i])
        {
            position = i;
        }
    }

    if(array[0] >= new_num)
    {
        position = 0;
    }

    if(array[stored -1] <= new_num)
    {
        array[stored] = new_num;
        return stored +1;
    }

    int portion[stored - position];

    for(int i = 0; i < (stored - position); i++)
    {
        portion[i] = array[position + i];
    }

    array[position] = new_num;

    for(int i = 0; i < stored - position; i++)
    {
        array[i + position + 1] = portion[i];
    }
    
    return stored + 1;



}

