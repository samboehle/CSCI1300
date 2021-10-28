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




void findMatchedGenome(string genome_1, string genome_2, string genome_3, string sequence)
{
    double highest_score = 0;
    double genome_1_score;
    double genome_2_score;
    double genome_3_score;
    
    if( genome_1 == "" || genome_2 == "" || genome_3 == "" || sequence == "")
    {
        cout << "Genomes or sequence is empty." << endl;
    }
    else if(genome_1.length() != genome_2.length() || genome_2.length() != genome_3.length())
    {
        cout << "Lengths of genomes are different." << endl;
    }

    else
    {
        genome_1_score = findBestSimScore(genome_1, sequence);
        genome_2_score = findBestSimScore(genome_2, sequence);
        genome_3_score = findBestSimScore(genome_3, sequence);

       
            
        if(genome_1_score > genome_2_score && genome_1_score > genome_3_score)
        {
            cout << "Genome 1 is the best match." << endl;
        }
        
        else if( genome_2_score > genome_1_score && genome_2_score > genome_3_score)
        {
            cout << "Genome 2 is the best match." << endl;
        }
        
        else if(genome_3_score > genome_1_score && genome_3_score > genome_2_score)
        {
            cout << "Genome 3 is the best match." << endl;
        }

        else if( genome_1_score == genome_2_score == genome_3_score)
        {
            cout << "Genome 1 is the best match." << endl << "Genome 2 is the best match." << endl << "Genome 3 is the best match." << endl;
        }
        else if(genome_1_score == genome_2_score && genome_1_score != genome_3_score)
        {
            cout << "Genome 1 is the best match." << endl << "Genome 2 is the best match." << endl; 
        }
        else if(genome_1_score == genome_3_score && genome_1_score != genome_2_score)
        {
            cout << "Genome 1 is the best match." << endl << "Genome 3 is the best match." << endl; 
        }
        else if(genome_2_score == genome_3_score && genome_2_score != genome_1_score)
        {
            cout << "Genome 1 is the best match." << endl << "Genome 3 is the best match." << endl; 
        }
    }
}

int main()
{
    string g_1, g_2, g_3, s;

    cin >> g_1;
    cin >> g_2;
    cin >> g_2;
    cin >> s;

    findMatchedGenome(g_1, g_2, g_3, s);







    return 0;
}