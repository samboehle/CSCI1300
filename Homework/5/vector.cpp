// CSCI1300 Spring 2020
// Author: Samuel Boehle
//Recitation: 101 - James Watson
//Homework #5 - Problem #5

//Used a do while loop to loop through, and then if statements to determine what to do with new value
//Then after that just used for loops to output data and find max and min



#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int current_number = 0;
    vector<int> numbers;
    int flag = 0;

    do
    {
        cout << "Please enter a number:" << endl;
        cin >> current_number;

        if(current_number == -1)
        {
            break;
        }

        if(numbers.size() == 0)
        {
            numbers.push_back(current_number);
            //cout << "Entered first" << endl;
            flag = 1;
        }
        if(current_number % 5 == 0 && flag == 0)
        {
            numbers.erase(numbers.begin());
            //cout<< "Entered second" << endl;
            flag = 1;
        }
        if(current_number % 3 == 0 && flag == 0)
        {
            numbers.pop_back();
           // cout <<"Entered third" << endl;
            flag = 1;
        }   
        if(flag == 0)
        {
            numbers.push_back(current_number);
            //cout << "Entered last" << endl;
        }


        flag = 0;
        //cout << numbers[0] << ", " << numbers[1] << ", " << numbers[2] << endl;

    }
    while(current_number != -1);
    
    cout << "The elements in the vector are: ";
    for(int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
    }

    cout << endl;

    int max = numbers[0];
    int min = numbers[0];

    for(int i = 0; i < numbers.size(); i++)
    {
        if(numbers[i] > max)
        {
            max = numbers[i];
        }
        //cout << max << endl;
    }

    cout << endl;

    for(int i = 0; i < numbers.size(); i++)
    {
        if(numbers[i] < min)
        {
            min = numbers[i];
        }
        //cout << min << endl;
    }

    cout << "Min = " << min << endl;
    cout << "Max = " << max << endl;





    return 0;
}