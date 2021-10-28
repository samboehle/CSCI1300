#include <string>
#include <fstream>
using namespace std;

int split1(string main, char splitter, string array[], int size)
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

class Country{
    private:
        string countries[50];
        string capitals[50];
    public:
        Country();
        int LoadCountry(string);
        int SearchForCountry(string);
        string GetCapital(string);
};

Country::Country()
{
    for(int i = 0; i < 50; i++)
    {
        countries[i] = "";
        capitals[i] = "";
    }
}

int Country::LoadCountry(string filename)
{
    ifstream myfile;
    myfile.open(filename);

    if(myfile.fail())
    {
        return -1;
    }

    string line;
    string current[2];
    int x;
    while(getline(myfile, line))
    {
        fill_n(current, 2, "");
        split1(line, ',', current, 2);
        if(current[0] == "" || current[1] == "")
        {
            continue;
        }

        countries[x] = current[0];
        capitals[x] = current[1];
        x++;
    }
    return 0;
}

int Country::SearchForCountry(string input)
{
    for(int i = 0; i < 50; i++)
    {
        if(countries[i] == input)
        {
            return i;
        }
    }

    return -1;
}

string Country::GetCapital(string input)
{
    int place = SearchForCountry(input);
    
    if(place == -1)
    {
        return "";
    }
    else
    {
        return capitals[place];
    }
    
}