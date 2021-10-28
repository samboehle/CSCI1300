// CSCI1300 Spring 2020
// Author: Samuel Boehle
//Recitation: 101 - James Watson
//Project 2 - Task #1

#include "Book.h"
#include <string>
using namespace std;

//Default constructor
Book::Book()
{
    title = "";
    author = "";
}

//Paramatized constructor
Book::Book(string t, string a)
{
    title = t;
    author = a;
}
//getters
string Book::getTitle()
{
    return title;
}

string Book::getAuthor()
{
    return author;
}
//setters
void Book::setTitle(string t)
{
    title = t;
}

void Book::setAuthor(string a)
{
    author = a;
}

