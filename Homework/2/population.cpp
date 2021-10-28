// CSCI1300 Spring 2020
// Author: Samuel Boehle
//Recitation: 101 - James Watson
//Homework #2 - Problem #7


#include <iostream>

using namespace std;

main()
{
    int current_population;
    
    cout << "Enter the current population:" << endl;
    cin >> current_population;

    //I simply calculated the total seconds in the year, and then divided by respective rate to find total.

    int birth = 31536000 / 8;
    int death = -31536000 / 12;
    int immigrant = 31536000 /27;

    int new_population;

    new_population = current_population + birth + death + immigrant;

    cout << "The population in one year: " << new_population << endl;

    return 0;
}