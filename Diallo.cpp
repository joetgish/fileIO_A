#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
using namespace std;





int main(){
    string a, b, c, d, e, f ,g;
    int l1 = 0, l2 = 0, l3 = 0,l4 = 0, l5 = 0, l6 = 0, l7 = 0, l8 = 0, l9=0, l10 = 0,l11 = 0;
    ifstream fin;
    ofstream fout, fup, fdonz;
    
    fin.open("gba.txt");
    fout.open("results.txt");
    fup.open("capitalize.txt");
    fdonz.open("uppercase.txt");
    
    string woot;
    double avg = 0;
    int sum = 0,wrd = 0;

    while(fin >> a)
    {
    char tel;
    string rest;
    for(int cownt = 0; cownt < a.length(); cownt++){
    if(cownt == 0){
        
    tel = a.at(cownt);
    tel = toupper(tel);}
    else
        rest += a.at(cownt);
    
    }
    fdonz << tel << rest << " ";   // Outputs it to the file
    
    for(int loop = 0; loop < a.length(); loop++){
        
        char yaaa;
        if (a.at(loop) >= 'a' and a.at(loop) <= 'z')
             a.at(loop) = toupper(a.at(loop));}
        
    fup << a << " ";
   
    
    if(a.length() == 1)
        l1++;
    if(a.length() == 2)
        l2++;
    if(a.length() == 3)
        l3++;
    if(a.length() == 4)
        l4++;
    if(a.length() == 5)
        l5++;
    if(a.length() == 6)
        l6++;
    if(a.length() == 7)
        l7++;
    if(a.length() == 8)
        l8++;
    if(a.length() == 9)
        l9++;
    if(a.length() == 10)
        l10++;
    if(a.length() >= 11)
        l11++;
    sum += a.length();
    wrd++;
    
    }
    
    avg  = sum / wrd;
    

    fout << "total words: " << wrd << endl;
    fout << "average characters per word: " << avg << endl;
    fout << l1 << " words of length 1\n";
    fout << l2 << " words of length 2\n";
    fout << l3 << " words of length 3\n";
    fout << l4 << " words of length 4\n";
    fout << l5 << " words of length 5\n";
    fout << l6 << " words of length 6\n";
    fout << l7 << " words of length 7\n";
    fout << l8 << " words of length 8\n";
    fout << l9 << " words of length 9\n";
    fout << l10 << " words of length 10\n";
    fout << l11 << " words of length 11\n";

fin.close();
fout.close();
fup.close();
fdonz.close();

return 0;}

