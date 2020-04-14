/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*Program: program for the given expression.
              Expression: 1+4+9+16+….+100 
Author:kalyani
filename:case2.cpp
date:09-04-2020
*/
#include <iostream>
using namespace std;

int main(int argc, char* argv[])     // command line arguments        
{
       // condition for arguments to dispaly -h file
    if (argc == 2)
    {
        cout << "sum of squares of 'n' numbers " << endl;
    }
    else
    {
        int i = 0, iSum = 0;      // declaration of variables
        int iNum;
        cout << "enter the number" << endl;
        cin >> iNum;

        for (i = 0; i <= iNum; i++)
        {
            iSum = iSum + (i*i);

        }
        cout << iSum;
    }
}



