#include <iostream>

using namespace std; 
int main()
{

	int month; 
	cout << "Enter a month:" << endl; 
	cin >> month; 
    
	if (month < 1 || month > 12)
    {
		cout << "Invalid" << endl; 
	}
    
    else if(month <= 2)
    {
		cout << "It's summer" << endl;
    }

    else if(month == 12)
    {
		cout << "It's summer" << endl;
    }
	
    else if(month >= 9 && month <= 11)
    {
		cout << "It's spring" << endl; 
	}
    
    else if (month >= 3 && month <= 5)
    {
		cout << "It's autumn" << endl; 
	}
    
    else if(month >= 6 && month <= 8)
    {
		cout << "It's winter" << endl; 
	}

	return 0;
}