#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int readSales(string file_name, string names[], int sales[][12], int size)
{
    ifstream myfile;
    myfile.open(file_name);

    if(myfile.fail())
    {
        return -1;
    }


    string line;
    int k = 0;
    int m = 0;
    while(getline(myfile, line))
    {
        if(k % 2 == 0)
        {
            names[m] = line;
        }
        else
        {
            line =+ ",";
            string num = "";
            for(int i = 0; i < line.length(); i++)
            {
                if(line[i] != ',')
                {
                    num = num + line[i];
                }
                else if(line[i] !=)
                {

                }
            }
            
            
            m++;
        }
        k++;
    }









}