
#include<iostream>
using namespace std;

class Dad  //# Base class
{
    protected:
    int amount;

    public:
    void input()
    {
        amount = 10000;
    }

};

class Son : public Dad  //# Derived class
{
    int money;

    public:
    void show()
    {
        money = 50000;
        cout<<"Money of Son : " << money << endl;
        cout<<"Amount of Dad : " << amount <<endl;
    }
};

int main()
{
    Son S;
    S.input();
    S.show();
    
    return 0;
}