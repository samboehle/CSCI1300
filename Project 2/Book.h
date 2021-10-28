// CSCI1300 Spring 2020
// Author: Samuel Boehle
//Recitation: 101 - James Watson
//Project 2 - Task #1


#include <string>
using namespace std;

//Defining book class

class Book{
    public:
        Book();
        Book(string, string);
        string getTitle();
        string getAuthor();
        void setTitle(string);
        void setAuthor(string);
    private:
        string title;
        string author;
};