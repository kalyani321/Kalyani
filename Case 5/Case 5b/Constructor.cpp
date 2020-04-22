/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*Program  :    Order of the construction and destruction of objects with and without virtual. 
Author     :    kalyani
filename   :    Constructor.cpp
*/
#include<iostream>
#include<string.h>
using namespace std;
// class declaration
class car
{

public:
	car()
	{
	cout<<"car constructor invoked"<<endl;
	}
	//virtual destructor of car
	virtual ~car()
	{
	cout<<"car destructor invoked"<<endl;
	}
};
class bmw:protected car
{
	public:
	bmw()
	{
	cout<<"bmw constructor"<<endl;
	}
	//virtual destructor of bmw class
	~bmw()
	{
	cout<<"bmw desctructor"<<endl;
	}
};
int main(int argc,char  **argv)
{
	 
       if(argc == 2 && strcmp(argv[1], "--help")==0)
	{
	
	cout<<"This program gives description of orderof constructor and destructors execution with virtual"<<endl;
	}
    else
	{
	    //Invoking constructors and virtual destructors creating pointers to the objects.
	car *c=new car();
	bmw *b=new bmw();
	}
}


