// CSCI1300 Spring 2020
// Author: Samuel Boehle
//Recitation: 101 - James Watson
//Project 2 - Task #2

#include <string>
using namespace std;

//defining user class
class User{
    public:
        User();
        void setUsername(string);
        bool setRatingAt(int, int);
        string getUsername();
        int getRatingAt(int);
    private:
        string username;
        int ratings[50];
};
