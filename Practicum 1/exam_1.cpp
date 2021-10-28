#include <iostream>
using namespace std;

int main()
{
    double gallons;
    double limit;
    double cost;

    cout << "Enter the number of gallons used: " << endl;
    cin >> gallons;

    cout << "Enter the low usage limit: " << endl;
    cin >> limit;

    if( gallons <= limit)
    {
        cost = gallons * .012;
    }
    
    else
    {
        cost = gallons * .018;
    }
    
    cout << "Water bill: " << cost << endl;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}