// CSCI1300 Spring 2020
// Author: Samuel Boehle
//Recitation: 101 - James Watson
//Homework #7 - Problem #2

#include "Team.h"
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

//Split function
int split(string main, char splitter, string array[], int size)
{
    main += splitter;
    char current;
    int place = 0;


    for(int i = 0; i < main.length(); i++)
    {
        
        if(main[i] != splitter)
        {
            array[place] += main[i];
        }
        else if(main[i] == splitter)
        {
            place++;
        }
    }
    

    return place;

}

//default constructor
Team::Team()
{
    teamName = "";
    numPlayers = 0;
}

//paramatized constructor
Team::Team(string new_name)
{
    teamName = new_name;
    numPlayers = 0;
}
void Team::setTeamName(string new_name)
{
    teamName = new_name;
}
int Team::readRoster(string filename)
{
    
    
    ifstream myfile;
    myfile.open(filename);
    if(myfile.fail())
    {
        return -1;
    }

    string line;
    string current[2];
    int i = 0;
    while(getline(myfile, line))
    {
        if(i >= 50)
        {
            break;
        }
        fill_n(current, 2, "");
        split(line, ',', current, 2);
        
        //taking the array and putting it into the players array of respective of place using iterator
        if(current[0] != "")
        {
            players[i].setName(current[0]);
            players[i].setPoints(stod(current[1]));
            i++;
        }
    }
    numPlayers = i;
    return i;
}


string Team::getPlayerName(int place)
{
    if(place >= numPlayers || place < 0)
    {
        return "Error";
    }

    //returning name using getname funciton from player class
    return players[place].getName();
}

double Team::getPlayerPoints(int place)
{
    if(place >= numPlayers || place < 0)
    {
        return -1;
    }
    //returning points using getpoints from player class
    return players[place].getPoints();
}

int Team::getNumPlayers()
{
    return numPlayers;
}

string Team::getTeamName()
{
    return teamName;
}