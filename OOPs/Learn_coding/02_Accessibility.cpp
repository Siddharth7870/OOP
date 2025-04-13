/*
Q. Accessibility of access specifiers :- 
1. private    -> i  ) class itself
.             -> ii ) friend of class

2. protected  -> i  ) class itself
.             -> ii ) inherited class 

3. public     -> i ) anywhere accessible


*/



#include<iostream>
using namespace std;

// create a class
class A
{
    //private:
    int a;

    //protected:
    int b;

    public:
    int c;
};

int main()
{
    A ob;
    // ob.a = 10; // not allowed access
    // ob.b = 15; // not allowed access
    ob.c = 20; // all access allowed

    // cout << ob.a <<endl;  // error this is private
    // cout << ob.b << endl; // error this is protected
    cout << ob.c << endl; // c = 20

}