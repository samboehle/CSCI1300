// CSCI1300 Spring 2020
// Author: Samuel Boehle
//Recitation: 101 - James Watson
//Homework #4 - Problem #4

//First I calculated some values from user inputs then I put that into a while loop to continiously compound the intrest


#include <iostream>
using namespace std;

int main()
{
    double salary, portion_save, house_cost, down_payment, portion, savings;
    int months = 0;

    cout << "Enter your annual salary:" << endl;
    cin >> salary;

    cout << "Enter the percent of your salary to save, as a decimal:" << endl;
    cin >> portion_save;

    cout << "Enter the cost of your dream home:" << endl;
    cin >> house_cost;

    down_payment = .25 * house_cost;

    portion = (salary / 12) * portion_save;

    while(savings < down_payment)
    {
        
        savings = savings + savings * (.04 / 12) + portion; 
        
        months = months + 1;
    }

    cout << "Number of months: " << months << endl;
    
    
    
    
    return 0;
}