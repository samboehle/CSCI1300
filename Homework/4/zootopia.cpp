// CSCI1300 Spring 2020
// Author: Samuel Boehle
//Recitation: 101 - James Watson
//Homework #4 - Problem #3

//In this program I used a do while loop to repeat a menu system
//I used switch statements choose which block of code I wanted to got to.
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int user_choice;
    double agility;
    double strength;
    double speed;
    double hire_score;

    do
    {
        agility = 0;
        strength = 0;
        speed = 0;

        
        cout << "Select a numerical option:\n=== menu ===\n1. Fox\n2. Bunny\n3. Sloth\n4. Quit" << endl;
        cin >> user_choice;
    
        switch(user_choice)
        {
            case 1:
                    cout << "Enter agility:" << endl;
                    cin >> agility;

                    cout << "Enter strength:" << endl;
                    cin >> strength;

                    hire_score = 1.8 * agility + 2.16 * strength + 3.24 * speed;

                    cout << "Hire Score: " << hire_score << endl;
                    break;
            case 2:
                    cout << "Enter agility:" << endl;
                    cin >> agility;

                    cout << "Enter speed:" << endl;
                    cin >> speed;

                    hire_score = 1.8 * agility + 2.16 * strength + 3.24 * speed;

                    cout << "Hire Score: " << hire_score << endl;
                    break;
            case 3:
                    cout << "Enter strength:" << endl;
                    cin >> strength;

                    cout << "Enter speed:" << endl;
                    cin >> speed;

                    hire_score = 1.8 * agility + 2.16 * strength + 3.24 * speed;

                    cout << "Hire Score: " << hire_score << endl;
                    break;
            case 4:
                    cout << "Good bye!" << endl;
                    return 0;
                    break;
            default:
                    cout << "Invalid option" << endl;
                    break;
        }
    }
    while(user_choice != 4);
    return 0;
}