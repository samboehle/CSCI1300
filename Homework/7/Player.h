// CSCI1300 Spring 2020
// Author: Samuel Boehle
//Recitation: 101 - James Watson
//Homework #7 - Problem #1

//Just defining the class per the write up

#include <string>
using namespace std;
class Player{
    public:
        Player();
        Player(string, double);
        string getName();
        double getPoints();
        void setName(string);
        void setPoints(double);
    private:
        string name;
        double points;
};