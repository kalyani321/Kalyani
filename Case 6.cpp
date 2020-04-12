/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*Program: class declaration and definition with constructors/destructor/operator
             overloading and member functions
Author:kalyani
filename:case6.cpp
date:11-04-2020
*/
#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
  // student class
class Student{
private:
  // private members
    int *iRoll_no;
    char cName[30]; 
public:
   // student constructor
    Student()   
    {
        cout<<"Constructor is Invoked"<<endl;
    }
    // student constructor with two parameters
    Student(int *i_no,char *cname)  
    {
        cout<<"Parameterized Constructor is Invoked"<<endl;
        iRoll_no=i_no;
        strcpy(cName,cname);
    }


    void Assign_Value(int *ino,char cname[])
    {
        iRoll_no=ino;
        strcpy(cName,cname);
    }

    void display()
    {
        cout<<"RollNo:"<<*iRoll_no<<endl<<"Name:"<<cName<<endl;
        cout<<endl;
    }

    void operator ++()  
    {
        ++(*iRoll_no);
    }
    ~Student()
    {
        cout<<"Destructor is Invoked"<<endl;
    }
};

int main(int argc,char* argv[])
{
    // condition for arguments to display -h file
    if(argc>=2)
    {
        if(strcmp(argv[1],"-h")==0)     
        {
            cout<<"used to display private variable int* and char[20], enter one int and char variables"<<endl;
        }
    }
    else
    {
        //creating objects for classes 
        Student obj;
        int iVal;
        char cNm[20];
        cout<<"Enter RollNo of Student:";
        cin>>iVal;
        cout<<"Enter Name of Student:";
        getchar();
        cin.get(cNm,100,'\n');
        cout<<endl<<"Using Parameterized Constructor"<<endl;
        Student obj2(&iVal,cNm);    
        obj2.display();
        cout<<"After Operator Overloading"<<endl;
        ++obj2;     
        cout<<"Using Member Function"<<endl;
        obj.Assign_Value(&iVal,cNm);    
        obj.display();
    }
    return 0;
}


