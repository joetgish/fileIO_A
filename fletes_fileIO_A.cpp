//Miguel Fletes
//10/20/15
//file IO_A

#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>

using namespace std;

void print();

int main()
{
    string valA, valC, valD, valE, valF;

    ifstream inResult;
    ofstream outResult;
    
    ifstream inCaps;
    ofstream outCaps;
    
    ifstream inUpper;
    ofstream outUpper;
    
    inResult.open("gba.txt");
    outResult.open("results.txt");
    
    inCaps.open("gba.txt");
    outCaps.open("capitalize.txt");
    
    inUpper.open("gba.txt");
    outUpper.open("uppercase.txt");
    
    if(inResult.fail())
    {
        cout << "error opening input file" << endl;
        exit(1);
    }
    
    if(outResult.fail())
    {
        cout << "error opening output file" << endl;
        exit(1);
    }
    if(inCaps.fail())
    {
        cout << "error opening input file" << endl;
        exit(1);
    }
    
    if(outCaps.fail())
    {
        cout << "error opening output file" << endl;
        exit(1);
    }
    if(inUpper.fail())
    {
        cout << "error opening input file" << endl;
        exit(1);
    }
    
    if(outUpper.fail())
    {
        cout << "error opening output file" << endl;
        exit(1);
    }
    
    
    string valB, word;
    double charCount = 0.0;
    double wordCount = 0.0;
    double wordCount2 = 0.0;
    double average;
    int word1 = 0;
    int word2 = 0;
    int word3 = 0;
    int word4 = 0;
    int word5 = 0;
    int word6 = 0;
    int word7 = 0;
    int word8 = 0;
    int word9 = 0;
    int word10 = 0;
    int wordxx = 0;
    while(inResult >> valB)
    {
        valA = valB + " ";
        valC = valA;
        wordCount++;
        wordCount2++;// to count hiphiens also
        if(valB == "--")
        {
            wordCount--;
        }
        
        for(int i = 0; i < valC.length(); i++)
        {
            valC[i] = toupper(valC[i]);
        }
        valD += valC;
        
        for(int i = 0; i <= valA.length(); i++)
        {   
            if(valA[i] != ' ')
            {
                if(((valA[i] >= 'A') && (valA[i] <= 'Z')) || ((valA[i] >= 'a') && (valA[i] <= 'z')))
                {
                    charCount++;
                    word += valA[i];
                    
                }
            }
        }
        
        for(int i = 0; i <= valA.length(); i++)
        { 
            if(i == 0)
            {
                word[0] = toupper(word[0]);
            }
        }   
        valF += word + " ";
            
            
            if(word.length() == 1)
            {
                word1++;
            }
            if(word.length() == 2)
            {
                word2++;
            }
            if(word.length() == 3)
            {
                word3++;
            }
            if(word.length() == 4)
            {
                word4++;
            }
            if(word.length() == 5)
            {
                word5++;
            }
            if(word.length() == 6)
            {
                word6++;
            }
            if(word.length() == 7)
            {
                word7++;
            }
            if(word.length() == 8)
            {
                word8++;
            }
            if(word.length() == 9)
            {
                word9++;
            }
            if(word.length() == 10)
            {
                word10++;
            }
            if(word.length() > 10)
            {
                wordxx++;
            }
        
        word = "";
        
     }
    average = charCount / wordCount;
    //cout << charCount << endl;
    //cout << wordCount2 << endl;
    outResult << "total number of words: " << wordCount2 << endl;
    outResult <<  "The average characters per word: " << average << endl; 
    outCaps << valD;
    outUpper << valF;
    
    outResult << word1 << " words of length 1" << endl;
    outResult << word2 << " words of length 2" << endl;
    outResult << word3 << " words of length 3" << endl;
    outResult << word4 << " words of length 4" << endl;
    outResult << word5 << " words of length 5" << endl;
    outResult << word6 << " words of length 6" << endl;
    outResult << word7 << " words of length 7" << endl;
    outResult << word8 << " words of length 8" << endl;
    outResult << word9 << " words of length 9" << endl;
    outResult << word10 << " words of length 10" << endl;
    outResult << wordxx << " words of length 11 or higher" << endl;
          
    
    inResult.close();
    outResult.close();
    inCaps.close();
    outCaps.close();
    inUpper.close();
    outUpper.close();
    return 0;
}

