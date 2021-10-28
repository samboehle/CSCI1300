#include <iostream>

using namespace std;

int main()
{
    int user_option;

    int indicator;


    cout << "Enter Option: " << endl;
    cin >> user_option;

    indicator = user_option;
    user_option = user_option * (user_option <= 4 && user_option >= 1);

    cout << user_option << endl;

    switch(user_option)
    {
        case 0:
            cout << "Choice " << indicator << ": Invalid" << endl;
            break;


        case 1:
            cout << "Choice 1: Play Game" << endl;
            break;

        case 2:
            cout << "Choice 2: View Stats" << endl;
            break;

        case 3:
            cout << "Choice 3: Save Game" << endl;
            break;
        
        case 4:
            cout << "Choice 4: Exit Game" << endl;
            break;
        
    }

    return 0;
}