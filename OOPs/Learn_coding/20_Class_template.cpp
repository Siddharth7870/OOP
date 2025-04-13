/*
Q.   Class template : Class template is also known as generic class 
,    we use class template when user doesn't know what kind of value to 
,    pots from the parameters. 

=> syntax : 
template < class type >
class  class _name
{
    //Body
}

*/

//# Q. W.A.P  to show the example of class template :?

#include<iostream>
using namespace std;

template < class A > 
class print
{
    public:
    print( A x , A y )
    {
        cout<< x << " " << y << endl;
    }
};
int main()
{ 
    //print <int> obj(100, 200);
    print <double> obj(10.0, 20.3);

    return 0;
}

