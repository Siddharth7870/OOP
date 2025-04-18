/*
Q.    What is Binary Operater overloading? with program
Ans.  A operater which contain two operands is called binary operator overloading


*/

//  W.A.P  to add two numbers using class function and friend function ?

#include<iostream>
using namespace std;

class demo
{
    int a,b;
    public:
    demo()
    {}
    
    demo(int x, int y) 
    {
        a = x;
        b = y;
    }

    void show()
    {
        cout<<"A = "<<a <<"  " <<"B = " << b<<endl;
    }
    demo operator + (demo obj)
    {
        demo temp;
        temp.a = a+obj.a;
        temp.b = b +obj.b;
        return temp;
    }
};

int main()
{
    demo ob(10,20), ob1(30,40),ob2(0,0);
    ob2 = ob + ob1;
    ob2.show();

}