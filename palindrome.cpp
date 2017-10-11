/*
  Name: palindrome.cpp
  Author: Ian Mallarino
  Contestant#: 01-0030-0076
  School: Coral Springs High
  Date: 16/11/11
  Description: Checks a given variable to tell if it is palindromic(BPA 2012 Regional Test)
*/

#include<iostream>
#include<string>

typedef std::string str;

bool checkIfPalindromic(str);

int main()
{
    str number;
    while(true)
    {
        std::cin>>number;
        if(checkIfPalindromic(number)) //Checks the number
        {
            std::cout<<number<<" is palindromic."<<std::endl;
        }
        else
        {
            std::cout<<number<<" is not palindromic."<<std::endl;
        }
    }
    return 0;
}

bool checkIfPalindromic(str var) //Checks if the opposite ends match and returns true if palindromic
{
    bool palindromic=true;  //Non-palindromic flag
    
    for(int i=0;i<(var.size()/2);i++)
    {
        if(var[i]!=var[(var.size()-i)-1]) 
        {
            palindromic=false;
        }
    }
    return palindromic;
}
