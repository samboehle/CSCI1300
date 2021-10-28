// CSCI1300 Spring 2020
// Author: Samuel Boehle
//Recitation: 101 - James Watson
//Homework #6 - Problem #1

//I split the string, and then put the data into a vector with respective data type
//Then calculate max and min with simply for loop



#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <array>
using namespace std;

int main()
{
    string file_name;
    cout << "Enter the file name:" << endl;
    cin >> file_name;

    ifstream my_file;
    my_file.open(file_name);

    if(my_file.fail())
    {
        cout << "Could not open file." << endl;
        return 1;
    }

    string holder;
    vector<string> lines;
    vector<string> name;
    vector<double> price;
    int i = 0;
    string current_price;



    while(getline(my_file, holder))
    {
        if(holder != "")
        {
            lines.push_back(holder);
            while(holder[i] != ',') {i++;}
        
            name.push_back(holder.substr(0, i));
            current_price = holder.substr(i+1, holder.length() - i);
            
            price.push_back(stod(current_price));
            i = 0;
        }

    }
    int largest_i, smallest_i;
    double smallest = price[0];
    double largest = price[0];
    for(int i = 0; i < price.size(); i++)
    {
        if(price[i] > largest)
        {
            largest_i = i;
            largest = price[i];
        }
        if(price[i] < smallest)
        {
            smallest_i = i;
            smallest = price[i];
        }
    }

    //cout << largest_i << ", " << smallest_i << endl;

    /*for(int i = 0; i < lines.size(); i++)
    {
        cout << lines[i] << endl;
    }
    for(int i = 0; i < name.size(); i++)
    {
        cout << name[i] << endl;
    }
    for(int i = 0; i < price.size(); i++)
    {
        cout << price[i] << endl;
    }*/

    cout << "The number of lines: " << lines.size() << endl;

    cout << "The most expensive product: " << name[largest_i] << endl;
    cout << "The least expensive product: " << name[smallest_i] << endl;

    my_file.close();
    return 0;
}