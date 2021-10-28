// CSCI1300 Spring 2020
// Author: Samuel Boehle
//Recitation: 101 - James Watson
//Homework #7 - Problem #1

#include "Player.h"
using namespace std;

//default constructor
Player::Player()
{
    name = "";
    points = 0;
}


//paramatized consturcot
Player::Player(string new_name, double new_points)
{
    name = new_name;
    points = new_points;
}



//returning variables
string Player::getName()
{
    return name;
}

double Player::getPoints()
{
    return points;
}
//seting variables
void Player::setName(string new_name)
{
    name = new_name;
}

void Player::setPoints(double new_points)
{
    points = new_points;
}

