/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*Program: program to Parse the give command line and display the output
               Input: parser.exe 1 a sss 4.5643 
Author:kalyani
filename:datatype.cpp
date:10-04-2020
*/
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<typeinfo>
using namespace std;
bool check(string str)
{
int iNumber;
for(iNumber=0;str.length()==1;iNumber++)
{
return true;
}
}	
int main(int argc,char *argv[])    // command line arguments  
{
    // declaration of variables
int iNumber1;
int iNumber2;
float fNumber3;
     // condition for arguments to dispaly -h file
if (argc==2)
	{
		cout << " parse.exe" << endl;
		cout << " enter values in command line" << endl << "char: a-z/ A-Z " << endl << "numbers(0-9)" << endl << "string group of characters" << endl;
		cout << " float (real/ decimal numbers)" << endl;

	}
	else
	{
	
for(iNumber1=1;iNumber1<argc;iNumber1++)
{
iNumber2=atoi(argv[iNumber1]);
fNumber3=atof(argv[iNumber1]);
if(iNumber2==0)
{
	if(check(argv[iNumber1]))
	{
	cout<<"char";
	cout<<"\t"<<argv[iNumber1]<< "\t"<<strlen(argv[iNumber1])<<endl;
	}
	else
	{
	cout<<"string";
	cout<<"\t"<<argv[iNumber1]<< "\t"<<sizeof(argv[iNumber1])<<endl;
	}
}
else
{
if(iNumber2==fNumber3)
cout<<"int"<< "\t"<<iNumber2<<"\t"<<sizeof(iNumber2)<<endl;
else
cout<<"float"<< "\t"<<fNumber3<<"\t"<<sizeof(fNumber3)<<endl;
}
}
return 0;
}
}


