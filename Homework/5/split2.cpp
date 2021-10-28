#include <string>
#include <iostream>
#include <array>
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
    
    //cout << place << endl;;
    return place;

}

int main()
{
    string array[9];
    string main = "a true friend will be the true true friend";
    
    split(main, ' ', array, 9);

    for(int i = 0; i < 9; i++)
    {
        cout << array[i] << endl;
    }


    return 0;
}