#include<iostream>
using namespace std;

// create a class
class A
{
    public:
    A( int a , int b )// parameterized constructor
    {
        cout << a << endl << b;
    }
};

int main()
{
    A obj( 100, 200 ); // constructor calling
}