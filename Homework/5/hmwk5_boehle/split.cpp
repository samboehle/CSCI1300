// CSCI1300 Spring 2020
// Author: Samuel Boehle
//Recitation: 101 - James Watson
//Homework #5 - Problem #6


//Used for loops to calculate where string should split then used for loop to get substring then put that into an array.

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int split(string main, char splitter, string array[], int size)
{
    vector<int> place;
    int j = 0;
    int length = main.length();
    int current_length;

    string s;
    s.push_back(splitter);
    //cout << s << endl;
    
    for(int i = 0; i < main.length(); i++)
    {
        if(s == main.substr(i, 1))
        {
            place.push_back(i);
        }
        
    }
    for(int i = 0; i < size; i++)
    {
        if(i == 0)
        {   
            if(main.substr(i, place[i]) != "")
            {
                array[j] = main.substr(i, place[i]);
                j++;
                
            }
            
        }
        else if(i < place.size())
        {
           
           if(main.substr(place[i] + 1, (place[i] - place[i -1]) -1) != "")
            {
                array[j] = main.substr(place[i] + 1,(place[i + 1] - place[i]) -1);
                j++;
            }
            
        }

        else
        {
            if(main.substr(place[i - 1] + 1, main.length() - place[i - 1] - 1) != "")
            {
                array[j] = main.substr(place[i - 1] + 1, main.length() - place[i - 1] - 1);
            }
        }
    }
    return array.size();

}
