// CSCI1300 Spring 2020
// Author: Samuel Boehle
//Recitation: 101 - James Watson
//Project 2 - Task #2

#include <string>
#include "User.h"
using namespace std;

User::User()
{
    username = "";
    for(int i = 0; i < 50; i++)
    {
        ratings[i] = 0;
    }
}

void User::setUsername(string u)
{
    username = u;
}

//error handling and then setting ratings array
bool User::setRatingAt(int index, int rate)
{
    if(index < 50 && index >= 0)
    {
        if(rate <= 5 && rate >= 0)
        {
            ratings[index] = rate;
            return true;
        }
    }
    return false;


}

string User::getUsername()
{
    return username;
}

int User::getRatingAt(int index)
{
    //error handling
    if(index >= 0 && index < 50)
    {
        return ratings[index];
    }
    return -1;
}
