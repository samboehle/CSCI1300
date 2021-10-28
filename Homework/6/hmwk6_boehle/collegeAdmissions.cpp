// CSCI1300 Spring 2020
// Author: Samuel Boehle
//Recitation: 101 - James Watson
//Homework #6 - Problem #3

//I first used a split function to seperate each line into an array, and then take each piece of data in that array and put it into a vector of that catagory
//Then I calculated the score, then then the outliers, then grade improvement, then outputted data.


#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int split(string main, char splitter, string array[], int size)
{
    main += splitter;
    char current;
    int place = 0;


    for(int i = 0; i < main.length(); i++)
    {
        
        if(main[i] != splitter)
        {
            array[place] += main[i];
        }
        else if(main[i] == splitter)
        {
            place++;
        }
    }
    

    return place;

}

int main()
{
    string filename;
    cout << "Enter the file name:" << endl;
    cin >> filename;

    ifstream myfile;
    myfile.open(filename);

    if(myfile.fail())
    {
        cout << "Could not open file." << endl;
        return -1;
    }
    string line;
    int line_n = 0;
    string current[9];
    vector<string> student;
    vector<int> sat;
    vector<double> gpa;
    vector<int> interest;
    vector<int> school;
    vector<int> sem1;
    vector<int> sem2;
    vector<int> sem3;
    vector<int> sem4;

    int k = 0;
    while(getline(myfile, line))
    {
        if(line_n < 1)
        {
            line_n++;
            continue;
        }
        fill_n(current, 9, "");
        split(line, ',', current, 9);
        student.push_back(current[0]);
        sat.push_back(stoi(current[1]));
        gpa.push_back(stod(current[2]));
        interest.push_back(stoi(current[3]));
        school.push_back(stoi(current[4]));
        sem1.push_back(stoi(current[5]));
        sem2.push_back(stoi(current[6]));
        sem3.push_back(stoi(current[7]));
        sem4.push_back(stoi(current[8]));
        line_n++;
    }

    vector<double> scores;
    double current_score;
    for(int i = 0; i < student.size(); i++)
    {
        current_score = (gpa[i] * 2.0 * .4) + ((sat[i] / 160.0) * .3) + (school[i] * .2) + (interest[i] * .1);
        scores.push_back(current_score);
    }

    vector<string> descion;
    for(int i = 0; i < student.size(); i++)
    {
        if(scores[i] >= 6)
        {
            descion.push_back("score");
        }
        else if(interest[i] == 0 && scores[i] >= 5)
        {
            descion.push_back("outlier");
        }
        else if(gpa[i] * 2 > 2 + (sat[i] / 160.0) && scores[i] >= 5)
        {
            descion.push_back("outlier");
        }
        else if(sem1[i] < sem2[i] && sem3[i] < sem4[i] && scores[i] >= 5)
        {
            descion.push_back("grade improvement");
        }
        else
        {
            descion.push_back("");
        }
        
    }
    
    cout << endl << "Results:" << endl;
    for(int i = 0; i < descion.size(); i++)
    {
        if(descion[i] == "")
        {
            cout << student[i] << "," << scores[i] << endl;
        }
        else
        {  
            cout << student[i] << "," << scores[i] << "," << descion[i] << endl;
        }
    }




    return 0;
}