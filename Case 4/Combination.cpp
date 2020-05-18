/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*
Program     :   A mapping of digit to letters 
Author      :   Kalyani
Filename    :   Combination.cpp
Date        :   13-05-2020
*/
#include<iostream>
#include<vector>
using namespace std;

// Function to return a vector that contains all the generated letter combinations 

vector<string> letterCombinations(string digits) 
{
    
    // To store the generated letter combinations
    vector<string> res;
    
    // charmap[i] stores all characters that corresponds to ith digit in phone 
    string charmap[10] = {"0", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    res.push_back("");
    
    // Try all possible letters for current digit in number[] 
    for (int i = 0; i < digits.size(); i++)
    {
        vector<string> tempres;
        string chars = charmap[digits[i] - '0'];
        cout<<"chars = "<<chars<<endl;
        cout<<"digits[i] = "<<digits[i]<<endl;
        cout<<"digits[i] - '0' = "<<digits[i] - '0'<<endl;


        for (int c = 0; c < chars.size();c++)
        {
            for (int j = 0; j < res.size();j++)
            {
                cout<<"res[j]= "<<res[j]<<endl;
                cout<<"chars[c]= "<<chars[c]<<endl;
                cout<<"res[j]+chars[c]= "<<res[j]+chars[c]<<endl;


                tempres.push_back(res[j]+chars[c]);
            }
            cout<<"==============="<<endl;
        }
        res = tempres;
    }
    // Return the generated result
    return res;
}

int main()
{
    string digits = "23";
     vector<string> res = letterCombinations(digits);
      
// Print the contents
    for (auto &i : res) 
    {
            for (auto &j : i)
                cout << j;
            cout << ' ';
    }
        cout << endl;
}
    


