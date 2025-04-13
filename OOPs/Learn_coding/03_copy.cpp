#include<iostream>
using namespace std;

class A 
{
    int x; int y;

    public:
    A(int a , int b ) //# parameterized constructor
    {
        x = a;  y = b;
        cout <<"parameterized : " << x << "\t" << y << endl;
    }
    A( A &ref ) //# copy constructor
    {
        x = ref.x;
        y  = ref.y;
        cout <<"Copy constructor : " << x <<"\t" << y << endl;
    }
};

int main()
{
    A paramet( 10,20 ); //#  parameterized constructor calling
    A copy = paramet ;  //#  this for copy constructor

}