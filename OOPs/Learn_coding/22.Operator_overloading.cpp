#include<iostream>
using namespace std;

class Number
{
    int add;

    public:
    Number(int ad = 0 ) // construtor call
    {
        add = ad;
    }

    //#  " + " Operator overloading
    // int operator + (Number obj)
    Number operator + (Number obj)
    {
        Number addition;
        addition.add = add + obj.add;
        return addition;
    }

    // Number display()
    void display()
    {
        cout<<"Addtion N1(30) + N2(40) = " << addition <<endl;
    }

};

int main()
{
    Number N1(30); // constructor call first Object
    Number N2(40);

    Number N3 = N1 + N2 ; // " + " Operator overloading function call

    N3.display();

    return 0;
}