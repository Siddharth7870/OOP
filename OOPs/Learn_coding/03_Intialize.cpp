#include<iostream>
using namespace std;

class A
{
    public:
    //A()
    A(double a)// parameterized
    {
        cout <<"I am learnig coding ";
        cout <<a;
    }
};

int main()
{
   // A obj = A();// constructor is used to "Intialize" the "Object"

    A obj = A( 90.9);
}