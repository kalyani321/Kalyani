/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*Program  :    Different way to initialize the private member variables in a class. 
Author     :    kalyani
filename   :    Private_variable.cpp
*/
#include<iostream>
#include<string.h>
using namespace std;
// class declaration
class Circle
{
private: 
            int ir;
public:
		    Circle(int ir=10){
				this->ir=ir;
			}
              void area(double ii)
              {
                   ir=ii;
                   double da=3.14*ir*ir;
                   cout<<"Area:"<<da;             }
              void area()
              {
                   
                   double da=3.14*ir*ir;
                   cout<<"Area: "<<da;                }
};
class Distance
{
    private:
        int imeter; 
    public:
        Distance(): imeter(0) { }
        //friend function
        friend int addFive(Distance);
};
// friend function definition
int addFive(Distance d)
{
    //accessing private data from non-member function
    d.imeter += 5;
    return d.imeter;
}
int main(int argc,char **argv)
{
             if(argc == 2 && strcmp(argv[1], "--help")==0)
          {
         
         cout<<"This program gives description of initializing private data members in different ways i.e.,Scope resolution operator,indirect initialisation and friend function"<<endl;
          }
         else
         {
         Circle obj;
         obj.area();
         obj.area(8);
         Distance D;
         cout<<"Distance: "<< addFive(D);
         return 0;
         }
}


