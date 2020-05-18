/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*
Program     :   Program which encodes all the words in the source file by reversing each word in text
                    file and replacing all the spaces with an alpha numeric character.  
Author      :   Kalyani
Filename    :   Sample.cpp
Date        :   16-05-2020
*/
#include <iostream>
#include<string.h>
#include<fstream>
#include<algorithm>
using namespace std; 


void out(string line)
{
    ofstream outputfile("sample.txt",ios::app);
    for(int value=0;value<line.length();value++)
    
    if (line[value] == ' ')
    { 
  
            line[value] = '*'; 
    } 
    outputfile<<line<<endl;
}
// Function to return the string after switching the individual words 
void switchWords(string file,string key) 
{ 
    ofstream outputfile("sample.txt",ios::out);
    outputfile<<key<<endl;
    outputfile.close();
    ifstream inputfile(file,ios::in);
    string String;
    // Pointer to the first character of the first word
    while(getline(inputfile,String))
    {
    int begin = 0; 
    for (int index = 0; index <= String.length(); index++) { 
  
        if (String[index] == ' ' || index == String.length()) { 
  
            // Pointer to the last character of the current word 
            int end = index - 1; 
  
            // switch the current word 
            while (begin < end) { 
                swap(String[begin], String[end]); 
                begin++; 
                end--; 
            } 
  
            // Pointer to the first character of the next word 
            begin = index + 1;
        } 
    }
    out(String);
    }
}
void in(string file,string key)
{
    string line;
    ifstream inputfile(file,ios::in);
    inputfile>>line;
    if(key==line)
    {
    while(getline(inputfile,line))
    {
    replace(line.begin(),line.end(),'*',' ');
      int begin = 0,index; 
    for (int index = 0; index <= line.length(); index++) { 
  
        // If the current word ended 
        if (line[index] == ' ' || index == line.length()) { 
  
            // Pointer to the last character of the current word 
            int end = index - 1; 
  
            // switch the current word 
            while (begin < end) { 
                swap(line[begin], line[end]); 
                begin++; 
                end--; 
            } 
  
            // Pointer to the first character of the next word 
            begin = index + 1;
        } 
    }
    cout<<line<<endl;
    }
        inputfile.close();
    }
    else
            cout<<"wrong key"<<endl;
} 
  
int main(int argc,char* argv[]) 
{ 
     if((argc==2)&&strcmp(argv[1],"-h")==0)    //creating the help command
    {
        cout<<"-d or -e -f textfile -k key"<<endl;
    }
    else if((argc==6)&&strcmp(argv[1],"-e")==0)    // calling encrypt
    {
    switchWords(argv[3],argv[5]);
    }
     else if((argc==6)&&strcmp(argv[1],"-d")==0)    // calling decrypt
    {
	in(argv[3],argv[5]);
    }
    return 0; 
}