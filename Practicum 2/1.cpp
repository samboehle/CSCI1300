#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

int calcProduce(string filename)
{
    ifstream myfile;
    myfile.open(filename);

    if(myfile.fail())
    {
        return -1;
    }


    string line;
    string output[3];
    vector<string> name;
    vector<int> ammount;
    vector<double> cost;
    double total_cost = 0;
    int i = 0;
    int entries = 0;
    while(getline(myfile, line))
    {
        split(line, ',', output, 3);
        if(output[0] == "")
        {
            continue;
        }
        
        name.push_back(output[0]);
        ammount.push_back(stoi(output[1]));
        cost.push_back(stod(output[2]));
        entries++;
    }

    for(int i = 0; i < name.size(); i++)
    {
        total_cost = total_cost + (ammount[i] * cost[i]);
        cout << name[i] << ": " << ammount[i] * cost[i] << endl;
    }

    cout << "Total: " << total_cost << endl;
    return entries;



}