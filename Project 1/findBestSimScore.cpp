#include <iostream>
#include <string>
using namespace std;

double calcSimScore(string sequence_1, string sequence_2)
{
    double similarity_score;
    double hamming_distance = 0;

    if(sequence_1.length() == sequence_2.length())
    {
        for(int i= 0; i <= sequence_1.length(); i++)
        {
            if(sequence_1.substr(i, 1) != sequence_2.substr(i, 1) )
            {
                hamming_distance++;

                //cout << sequence_1.substr(i, i + 1) <<"    " << sequence_2.substr(i, i+1) << endl;
                //cout << hamming_distance << endl;
            }
        }

        similarity_score = (sequence_1.length() - hamming_distance) / sequence_1.length();
        
        
        
        
        if(sequence_1 == "" || sequence_2 == "")
        {
        similarity_score = 0;
        }
        //cout << hamming_distance << endl;
        return similarity_score;
    }

    else
    {
        similarity_score = 0;
        return similarity_score;
    }
    
    
}


double findBestSimScore(string full, string sub)
{
    string current;
    double score = 0;
    double current_score;


    if(full == "")
    {
        return 0;
    }
    else if(sub.length() > full.length())
    {
        return 0;
    }

    for(int i = 0; i <= (full.length()-sub.length()); i++)
    {
        current = full.substr(i, sub.length() );

        current_score = calcSimScore(current, sub);

        if(current_score > score)
        {
            score = current_score;
        }
    }

    
        return score;
    
}