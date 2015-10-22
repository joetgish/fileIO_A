//Name:Evelyn Murillo
// Program that uses input output from a file.

#include <iostream>//cin cout 
#include <fstream>//to use fout and fin
#include <cstdlib>
#include <string>//string 
using namespace std;

int main()
{
	ifstream fin;//like cin but for files
	ofstream fout;//like cout but for files
	ofstream foutB;//second cout
	ofstream foutC;//third cout
	string  word;
	string allCaps;//declaration for all capital letters
	int count = 0;
	int chars = 0;
	int countA = 0;
	int countB = 0;
	int countC = 0;
	int countD = 0;
	int countE = 0;
	int countF = 0;
	int countG = 0;
	int countH = 0;
	int countI = 0;
	int countJ = 0;
	int countMore = 0;

	fin.open("gba.txt");//opening files
	fout.open("result.txt");
	foutB.open("capitalize.txt");
	foutC.open("uppercase.txt");

	if(fin.fail())//this is to check if the file exist 
	{
		cout << "Error!" << endl;
		exit(1);
	}

	if(fout.fail())
	{
		cout << "Error!"<< endl;
		exit(1);
	}
	
	if(foutB.fail() || foutC.fail())
	{
		cout << "Error" << endl;
		exit(1);
	}

	
	while(fin >> word)//reads file
	{
		int length = word.length();
	
		for(int ix = 0; ix < word.length(); ix++ )
		{
			chars++;
		}
		count ++;
		
		char letter;
		letter = word[0];
		letter = toupper(letter);
		word = word.substr(1,word.length());
		word = letter + word;
		foutC << word << " ";
			
	
		for(int ix = 0; ix < word.length(); ix++)// for loop that will, capotalize the chars!
		{
		 string allCaps;
		 char letter;
		 letter = toupper(word[ix]);//capitalizing function
		 allCaps += letter;
		 foutB << allCaps ;
		}	
		 foutB << "  ";		

		switch (length)
		{
			case 1:countA++;
				break;
			case 2: countB++;
				break;
			case 3: countC++;
				break;
			case 4: countD++;
				break;
			case 5: countE++;
				break;
			case 6: countF++;
				break;
			case 7: countG++;
				break;
			case 8: countH++;
				break;
			case 9: countI++;
				break;
			case 10: countJ++;
				break;
			case 11: 
			case 12:
			case 13:
			case 14:
			case 15:
			case 16:
			case 17:
			case 18: countMore++;
				break;
			default: break;

		}
	}

	fout << countA << " of length 1\n";
	fout << countB << " of length 2\n";
	fout << countC << " of length 3\n";
	fout << countD << " of length 4\n";
	fout << countE << "of  length 5\n";
	fout << countF << "of length 6\n";
	fout << countG << "of length 7\n";
	fout << countH << "of length 8\n";
	fout << countI << " of length 9\n";
	fout << countJ << "of length 10\n";
	fout << countMore << "of  length 11 or more\n\n";
	fout << "Average Number of characters is : " << chars/count << endl;
	fout << "The total Number of words is  " << count << endl << endl;

		
	
	fin.close();
	fout.close();
	foutB.close();
	foutC.close();

	return 0;
}



