#include<iostream>
using namespace std;

int a, b,c; 

class A
{
    
    public:
    void input();
    void add();
};
void A :: input()
{
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
}
void A :: add()
{
    c = a + b;
    cout<<"Addition : " << c <<endl;
}

class B
{
    public:
    void sub();

};
void B :: sub()
{
    c = a - b ;
    cout<<"Subtraction : "<< c <<endl;
}

class C : public A, public B 
{
    public:
    void multi();
    void div();
    void rem();

};
void C :: multi()
{
    c = a * b;
    cout<<"Multiplication : " << c <<endl;
}
void C :: div()
{
    c = a / b ;
    cout<<"Divition : "<< c <<endl;
}
void C :: rem()
{
    c = a % b;
    cout<<"Remender : "<< c <<endl;
}

int main()
{
    C obj;
    obj.input();
    obj.add();
    obj.sub();
    obj.multi();
    obj.div();
    obj.rem();

    return 0;
}