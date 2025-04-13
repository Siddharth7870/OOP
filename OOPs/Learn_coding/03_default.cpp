#include<iostream>
using namespace std;

// create a class
class A
{
    int a, b; // this is by default private

    public:
    A () // default constructor
    {
       a = 10; b = 20;
       cout << a << endl << b;
       
    }
};

int main()
{
    A  ob; //# at the time constructor calling automatically

    return 0;
}