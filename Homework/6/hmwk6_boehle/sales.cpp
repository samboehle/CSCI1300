// CSCI1300 Spring 2020
// Author: Samuel Boehle
//Recitation: 101 - James Watson
//Homework #6 - Problem #2

//I seperated name into the name array, then put score into the array
//Mamy itereators used to make sure arrays were alined

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int readSales(string file_name, string names[], int sales[][12], int size)
{
    //string file_name;
    //cout << "Enter the file name:" << endl;
    //cin >> file_name;
    ifstream myfile;
    myfile.open(file_name);

    if(myfile.fail())
    {
        return -1;
    }

    string line;
    int k = 0;
    int j = 0;
    int m = 0;

    vector<string> temp;

    while(getline(myfile, line))
    {

        if(m == size)
        {
            return m;
        }

        if(k % 2 == 0)
        {
            names[m] = line;
        }
        else
        {
            line += ",";
            string num = "";
            // cout << "i: " << i <<endl;
            // cout << m << endl;
            j = 0;
            for(int i = 0; i < line.length(); i++)
            {
                if(line[i] != ',')
                {
                   num = num + line[i];
        
                }
                else if(num != " "){
                    //cout << "num: " << num << endl;
                    //cout << "m: " << m << endl;
                    sales[m][j] = stoi(num);
                    //cout << sales[m][j] << endl;
                    j++;
                    num = "";
                }
                
            }
            m++;
        }
        
        //cout << sales[m][j] << endl;

        k++;
    }

    /*for(int i = 0; i < name.size(); i++)
    {
        cout << name[i] << endl;
    }*/

    return m;
}

int main()
{
    string fileName = "sales.txt";
    const int SIZE = 10;
    string names[SIZE];
    int sales[SIZE][12];


    int numPeople = readSales(fileName, names, sales, SIZE);
    /*for(int i = 0;i<12;i++){
        cout << sales[1][i] << endl;
    }*/
    
    return 0;
}