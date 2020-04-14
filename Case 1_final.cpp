/*
filename: 1st casecc.cpp
details: Program to parse the command line and dispaly the output
author:Rajya lakshmi
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
int main(int argc,char *argv[])
{
int ig;
int iJ;
float fh;
if (argc==2)
{
cout<<"usageof filenam"<<endl;
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
