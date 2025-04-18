#include<iostream>

namespace A
{
    int a ;
    void print()
    {
        a = 10;
        std::cout<< a << " ";
    }
}

namespace B
{
    int b;
    void print()
    {
        b = 20;
        std::cout<< b ;
    }
}

int main()
{
    A::print();
    B::print();
    std::cout<<"Ramanand ";
    return 0;
}