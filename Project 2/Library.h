// CSCI1300 Spring 2020
// Author: Samuel Boehle
//Recitation: 101 - James Watson
//Project 2 - Task #3

#include <string>
#include "Book.h"
#include "User.h"
using namespace std;

//defining library class
class Library{
    public:
        Library();
        int getNumBooks();
        int getNumUsers();
        int readBooks(string);
        int readRatings(string);
        void viewRatings(string, int);
        void printAllBooks();
        void addUser(string);
        void updateRating(string, string, int);
        void getRecommendations(string);
    private:
        //making an array of type book class and then user aray of user class
        Book books[50];
        User users[100];
        int numBooks;
        int numUsers;
};