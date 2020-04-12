/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*Program: program to Parse the give command line and display the output
               Input: parser.exe 1 a sss 4.5643 
Author:kalyani
filename:case1.cpp
date:10-04-2020
*/
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<typeinfo>
using namespace std;
bool check(string str)
{
int ik;
for(ik=0;str.length()==1;ik++)
{
return true;
}
}	
int main(int argc,char *argv[])    // command line arguments  
{
    // declaration of variables
int ig;
int iJ;
float fh;
     // condition for arguments to dispaly -h file
if (argc==2)
	{
		cout << " parse.exe" << endl;
		cout << " enter values in command line" << endl << "char: a-z/ A-Z " << endl << "numbers(0-9)" << endl << "string group of characters" << endl;
		cout << " float (real/ decimal numbers)" << endl;

	}
	else
	{
	
for(ig=1;ig<argc;ig++)
{
iJ=atoi(argv[ig]);
fh=atof(argv[ig]);
if(iJ==0)
{
	if(check(argv[ig]))
	{
	cout<<"char";
	cout<<"\t"<<argv[ig]<< "\t"<<strlen(argv[ig])<<endl;
	}
	else
	{
	cout<<"string";
	cout<<"\t"<<argv[ig]<< "\t"<<sizeof(argv[ig])<<endl;
	}
}
else
{
if(iJ==fh)
cout<<"int"<< "\t"<<iJ<<"\t"<<sizeof(iJ)<<endl;
else
cout<<"float"<< "\t"<<fh<<"\t"<<sizeof(fh)<<endl;
}
}
return 0;
}
}


