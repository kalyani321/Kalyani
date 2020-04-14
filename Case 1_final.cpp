/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*
 Program: Program to parse the command line and dispaly the output
 filename: Case 1_final.cpp
 Author: kalyani
 date:13/04/2020
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
int main(int argc,char *argv[])    // Command line arguments
{
    // decalration of variables
int ig;
int iJ;
float fh;
    // condition for arguments to display -h file
if (argc==2)
{
cout<<"usage of filename"<<endl;
cout<<argv[0]<<"datatype1 datatype2 .... datatypeN "<<endl;    	}
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

