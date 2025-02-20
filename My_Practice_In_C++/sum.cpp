#include<iostream>
using namespace std;

// write a program to add two number using C++

int main()
{
    int a,b,c;
    std::cout<<"Enter any two number = \n";
    std::cin>>a>>b;
    c = a + b;
    std::cout<< "Addition of two numbers "<<a<< " + " << b << " is " << c << std::endl;
    return 0;
}