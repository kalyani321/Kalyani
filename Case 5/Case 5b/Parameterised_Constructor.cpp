/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*Program  :    Order of the construction and destruction of objects with and without virtual. 
Author     :    kalyani
filename   :    Parameterised_Constructor.cpp
*/
#include<iostream>
#include<string.h>
using namespace std;
// class declaration
class car
{
int inumofwheels;
public:
	//consructor of vehicle class
	car()
	{
	cout<<"car class constructor"<<endl;
	}
	//parameterised  constructor of class 
	car(int ix)
	{
	cout<<"Inparametrised car constructor"<<endl;
	inumofwheels=ix;
	}
	//Desturctor of car class
	~car()
	{
	cout<<"car class destructor"<<endl;
	}
};
class bmw:public car
{
string iName;
public:
//constructor of bmw class
	bmw()
	{
	cout<<"bmw class constructor"<<endl;
	}
	//parameterised constructor of bmw class
	bmw(string iName)
	{
	cout<<"In bmw class Parameterisedrised constructor"<<endl;
	this->iName=iName;
	}
	//Destructor of bmw class
	~bmw()
	{
	cout<<"bmw class destructor"<<endl;
	}
};
class audi:public car
{
int inumofseats;
public:
	//constructor of audi class
	audi()
	{
	cout<<"audi class constructor"<<endl;
	}
	//Parameterised constructor
	audi(int inumofseats)
	{
	cout<<"audi parametrised constructor"<<endl;
	this->inumofseats=inumofseats;
	}
	//destructor of audi class
	~audi()
	{
	cout<<"Audi destructor"<<endl;
	}
};
int main(int argc,char **argv)
{
   if(argc == 2 && strcmp(argv[1], "--help")==0)
   {
	
	cout<<"This program gives description of orderof constructor and destructors execution"<<endl;
	}
	else
	{
	car vl(4);
	bmw cl("i20");
	bmw c2;
	audi bl(5);
	audi b2;
	}
}



