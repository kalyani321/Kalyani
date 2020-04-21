/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/* Filename            :      Datatype.cpp
   Author              :      kalyani
   Description         :      Displaying the type and size of the arguments
   */
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int main(int argc,char * argv[])
{
	int iNumber;
//Reading number of arguments argc
	cout<<"no of arguments "<<argc<<endl;
	if(argc==2)
	{
	    cout<<"Usage:"<<endl;
        cout<<"argv[0],datatype1,datatype2,datatype3.........datatype N"<<endl;
	}
	//Displaying the type and size of arguments	
    cout<<"type"<<"\t"<<"value"<<"\t"<<"size"<<endl;
	for(iNumber=1;iNumber<argc;iNumber++)
	{
		auto a =atoi(argv[iNumber]);

		if(a==0)
		{
//If string length is equal to 1 print as a char if not print string
			if(strlen(argv[iNumber])==1)
			cout<<"char";
			else
			cout<<"string";
			cout<<"\t"<<argv[iNumber]<<"\t"<<strlen(argv[iNumber])<<endl;
		} 
		else
		{
			auto b=atof(argv[iNumber]);
			if(a==b)
			{
				cout<<"int"<<"\t"<<a<<"\t"<<sizeof(a)<<endl;
			}
			else
			cout<<"float"<<"\t"<<b<<"\t"<<sizeof(b)<<endl;
		}
	}
	return 0;
}









