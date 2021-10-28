// CSCI1300 Spring 2020
// Author: Samuel Boehle
//Recitation: 101 - James Watson
//Homework #7 - Problem #3

#include <iostream>
using namespace std;
#include "Team.h"


string game(Team t1, Team t2)
{
    
    //seing if equal
    if(t1.getNumPlayers() < 4 || t2.getNumPlayers() < 4)
    {
        return "forfeit";
    }
    double t1_pts = 0;
    double t2_pts = 0;
    
    //fiding both total scores
    for(int i = 0; i < 4; i++)
    {
        t1_pts = t1_pts + t1.getPlayerPoints(i);
        t2_pts = t2_pts + t2.getPlayerPoints(i);
    }

    //if equal
    if(t1_pts == t2_pts)
    {
        return "draw";
    }
    if(t1_pts > t2_pts)
    {
        return t1.getTeamName();
    }
    if(t2_pts > t1_pts)
    {
        return t2.getTeamName();
    }


}

int main()
{


    return 0;
}