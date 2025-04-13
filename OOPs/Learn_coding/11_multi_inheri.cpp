/*

ii ) Multi-level inheritance :- 

-- > Base 
.     |
.  Derived_1
.     |
.  Derived_2

---> Syntax -: 
class A 
{
    int a,b;
    a + b;
};
class B : public A 
{
    a - b ;
};
class C : public B
{
    a * b ;
    a / b ;
    a % b ;
};

*/

#include<iostream>
using namespace std;

class A
{
    protected:
    int a, b;

    public:
    void input()
    {
        cout<<"Enter the first number : ";
        cin>>a;
        cout<<"Enter the second number : ";
        cin>>b;

    }
};
class B : public A
{
    int ads;
    public:
    void add()
    {   
        ads = a + b;
        cout<<"Addition : " << ads << endl;
    }
    void sub()
    {
        ads = a - b;
        cout<<"Subtraction : " << ads <<endl;
    }
};
class C : public B
{
    int mdm;
    public:
    void mul()
    {
        mdm = a * b;
        cout<<"Multiplication : " << mdm << endl;
    }
    void div()
    {
        mdm = a / b;
        cout<<"Division : " << mdm << endl;
    }
    void mod() 
    {
        mdm = a % b;
        cout<<"Mudolas : " << mdm << endl;
    }

};

int main()
{
    C obj;
    obj.input();
    obj.add();
    obj.sub();
    obj.mul();
    obj.div();
    obj.mod();
    
    return 0;
}