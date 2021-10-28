// CSCI1300 Spring 2020
// Author: Samuel Boehle
//Recitation: 101 - James Watson
//Homework #7 - Problem #2

#include <string>
#include "Player.h"
using namespace std;


//Defining Team class per write up
class Team{
    public:
        Team();
        Team(string);
        void setTeamName(string);
        int readRoster(string);
        string getPlayerName(int);
        double getPlayerPoints(int);
        int getNumPlayers();
        string getTeamName();

    private:
        //making a array of the Player class size 50       
        Player players[50];
        string teamName;
        int numPlayers;
};
