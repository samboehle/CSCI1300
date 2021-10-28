#include <iostream>

using namespace std;

int main()
{
    double number_1;
    double number_2;
    double number_3;

    cout << "Enter first number:" << endl;
    cin >> number_1;

    cout << "Enter second number:" << endl;
    cin >> number_2;

    cout << "Enter third number:" << endl;
    cin >> number_3;

    if (number_1 <= number_2 && number_1 <= number_3)
    {
        cout << "The smallest number is " << number_1 << endl;
    }

    else if (number_2 <= number_1 && number_2 <= number_3)
    {
        cout << "The smallest number is " << number_2 << endl;
    }

    else if (number_3 <= number_1 && number_3 <= number_2)
    {
        cout << "The smallest number is " << number_3 << endl;
    }

    return 0;
}