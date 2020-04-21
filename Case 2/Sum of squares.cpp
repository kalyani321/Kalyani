/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/* Filename            :      Sum of Squares.cpp
   Author              :      kalyani
   Description         :     Sum of the Squares of N numbers 
   */
#include<iostream>
#include<string.h>
using namespace std;
int squaresum(int iNum) 
{ 
    // condition for positive integer
    if(iNum>=1)
    {
    //Formula for the sum of squares 
	return (iNum * (iNum + 1) * (2 * iNum + 1)) / 6; 
    }
    else 
     cout<<"Only the positive values are allowed:  "<<endl;
} 
int main(int argc, char *argv[])
{
	//checking arguments to display -h
	if(argc>=2)             
	{
		if(strcmp(argv[1],"-h"))
		cout<<"Usage :"<<endl;
		cout<<"Input : Integer"<<endl;
		}
	else
	{
		// declaration of variable 
		int iNum;               
		cout<<"Enter Positive Integer"<<endl;
		cin>>iNum;
		//function call
        cout<<"Sum of Squares of N numbers = "<<squaresum(iNum)<<endl;
		
	}
}





