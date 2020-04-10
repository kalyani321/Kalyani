/*File Name     :square.cc
  Author Name   :kalyani
  Description   :sum of squares of N numbers*/
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    
    if (argc == 2)
    {
        cout << "sum of squares of 'n' numbers " << endl;
    }
    else
    {
        int i = 0, iSum = 0;
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
