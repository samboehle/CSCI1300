// CSCI1300 Spring 2020
// Author: Samuel Boehle
//Recitation: 101 - James Watson
//Homework #3 - Problem #6

//I used switch statments to determine what level of personalization the ad should be. Then I just used if and else statements within the switch.


#include <iostream>
#include <string>

using namespace std;

int main()
{
    int personalized;
    string dog;
    int facebook_friends;
    int zip_code;
    int age;


    cout << "How personalized should the ad be? (1-3)" << endl;
    cin >> personalized;

    if( personalized < 1 || personalized > 3)
    {
        cout << "Invalid option." << endl;
        return 0;
    }

    else
    {
        switch (personalized)
        {
            case 1:
                cout << "Do you own a dog?" << endl;
                cin >> dog;

                if(dog == "Yes" || dog == "yes")
                {
                    cout << "Meat's the need of dogs like yours!​" << endl;
                }

                else
                {
                    cout << "Dirty mouth? Clean it up with new Orbit Raspberry Mint.​" << endl;
                }
                break;

            case 2:

                cout << "How many Facebook friends do you have?" << endl;
                cin >> facebook_friends;

                if (facebook_friends >= 500)
                {
                    cout << "Don't like cleaning up after your dog? Call Doody Free to sign up for backyard cleanup or dog walking service.​" << endl;
                }
                else
                {
                    cout << "Who doesn't need another cat? Adopt a shelter pet right meow." << endl;
                }
                break;

            case 3:

                cout << "What is your zip code?" << endl;
                cin >> zip_code;

                cout << "What is your age?" << endl;
                cin >> age;

                if(zip_code >= 80301 && zip_code <= 80310 && age >= 25)
                {
                    cout << "You are surrounded by professional athletes. Up your exercise game in the privacy of your home with a Peloton bike.​" << endl;
                }

                else if(zip_code >= 80301 && zip_code <= 80310 && age < 25)
                {
                    cout << "Looking for dinner that won't break the bank? Tacos. Come grab a $3 at Centro Latin Kitchen.​" << endl;
                }

                else
                {
                    cout << "Feeling Uninspired? The Boulder Flatirons are calling. Come hike to inspiring views, delicious food, and enjoy the hospitality of Boulder, CO​." << endl;
                }
                break;
        }
    }
    return 0;
}