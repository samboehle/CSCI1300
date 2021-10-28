#include <iostream>
#include <string>
using namespace std;

//In calcSimScore I used if statements to determine if the sequences should be calcualted and pass error staments
//I used a for loop to check if the letters matched

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

            }
        }

        similarity_score = (sequence_1.length() - hamming_distance) / sequence_1.length();
        
        
        
        
        if(sequence_1 == "" || sequence_2 == "")
        {
        similarity_score = 0;
        }

        return similarity_score;
    }

    else
    {
        similarity_score = 0;
        return similarity_score;
    }
    
    
}

//I used the calcsimscore in this fucntion
//I used a for loop and then and if statement in that for loop to determine the best score for that sequence

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


//Void function since it doesn't return anything.
//Calculated all of the scores and then passed through a bunch of else if statements to decide what message to output.

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

//Used a do while loop to keep looping throught the menu and programs.
//Switch statements to decide which function to call.

using namespace std;
int main()
{
    int choice;
    string sequence_1;
    string sequence_2;
    string genome;
    string sequence;
    string sequence_3;
    string genome_1, genome_2, genome_3;

    do
    {
        cout << "Select a numerical option:\n=== menu ===\n1. Find similarity score\n2. Find the best similarity score\n3. Analyze the genome sequences\n4. Quit" << endl;
        cin >> choice;
        
        switch(choice)
        {
            case(1):
                cout << "Enter sequence 1:" << endl;
                cin >> sequence_1;

                cout << "Enter sequence 2:" << endl;
                cin >> sequence_2;

                cout << "Similarity score: " << calcSimScore(sequence_1, sequence_2) << endl;
                break;

            case(2):
                cout << "Enter genome:" << endl;
                cin >> genome;

                cout << "Enter sequence:" << endl;
                cin >> sequence;

                cout << "Best similarity score: " << findBestSimScore(genome, sequence) << endl;
                break;
            
            case(3):
                cout << "Enter genome 1:" << endl;
                cin >> genome_1;

                cout << "Enter genome 2:" << endl;
                cin >> genome_2;

                cout << "Enter genome 3:" << endl;
                cin >> genome_3;

                cout << "Enter sequence:" << endl;
                cin >> sequence_3;

                findMatchedGenome(genome_1, genome_2, genome_3, sequence_3);
                break;
            
            case(4):
                cout << "Good bye!" << endl;
                return 0;
                break;

            default:
                cout << "Invalid option." << endl;
                break;
        }

   
    }
    while(choice != 4);
    

    return 0;
    
}