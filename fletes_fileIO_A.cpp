//Miguel Fletes
//10/20/15
//file IO_A

#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>

using namespace std;

int main()
{
    string valA, valC, valD, valE, valF;//need these variable in my main() scope so I could 
    //output into the files needed.

    ifstream inResult;//creates result text file
    ofstream outResult;
    
    ifstream inCaps;//creates inCaps text file
    ofstream outCaps;
    
    ifstream inUpper;//creates inUpper text file
    ofstream outUpper;
    
    inResult.open("gba.txt");//opens gba.txt file
    outResult.open("results.txt");//links the pipe to results.txt
    
    inCaps.open("gba.txt");
    outCaps.open("capitalize.txt");//links a new pipe from gba.txt to capitalize.txt
    
    inUpper.open("gba.txt");
    outUpper.open("uppercase.txt");//connects new pipe between two files
    
    //these if statements check if the linking process worked and outputs respectively if they didn't
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
    double charCount = 0.0;//this count # of characters there are
    double wordCount = 0.0;//counter for words
    double wordCount2 = 0.0;
    double average;
    int word1 = 0;//these variables are for the number of word with a certain number of chars in them
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
        valA = valB + " ";//move the valB string into a new string with space in between the words
        valC = valA;//same string as valA but needed for different changes
        wordCount++;//every time there is a space word count will incriment by one
        wordCount2++;// to count hiphiens also
        if(valB == "--")
        {//will subtract from word count if there is a double hiphiens
            wordCount--;
        }
        
        for(int i = 0; i < valC.length(); i++)
        {//this for loop checks every letter and changes it to the uppercase letter respectively
            valC[i] = toupper(valC[i]);
        }
        valD += valC;//adds every upperCase letter to the new string in order to have the new speech
        //in uppercase
        
        for(int i = 0; i <= valA.length(); i++)
        {  //this for loop is for the character count 
            if(valA[i] != ' ')
            {//checks to see if the index is not a space
                if(((valA[i] >= 'A') && (valA[i] <= 'Z')) || ((valA[i] >= 'a') && (valA[i] <= 'z')))
                {//if it is not and the char is a letter, then the char count goes up by one
                    charCount++;
                    word += valA[i];//adds character into the string word
                    
                }
            }
        }
        
        for(int i = 0; i <= valA.length(); i++)
        { //this for loop checks all words incrimentally
            if(i == 0)
            {
                word[0] = toupper(word[0]);//changes the letter at index 0 to its upper case letter
            }
        }   
        valF += word + " ";//adds word plus a space to get the new speech with the first 
        //letter of every word capatalized
        
            
            //these if statements check each word for its length and places it into the 
            //correct category
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
    average = charCount / wordCount;//finds average of chars divided by words
    //cout << charCount << endl;
    //cout << wordCount2 << endl;
    
    //outputs word count and average to the result file
    outResult << "total number of words: " << wordCount2 << endl;
    outResult <<  "The average characters per word: " << average << endl;
    
    //sends the speech with every letter capatalized to the correct file 
    outCaps << valD;
    
    //sends the speech with every first letter capatalized to the correct file
    outUpper << valF;
    
    //outputs the result to the result file
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
          
    //closes all of the files
    inResult.close();
    outResult.close();
    inCaps.close();
    outCaps.close();
    inUpper.close();
    outUpper.close();
    return 0;
}

