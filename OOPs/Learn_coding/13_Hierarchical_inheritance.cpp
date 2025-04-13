/*
Q.   What is hierarchical inheritance ?
Ans  Base one to different derived class. 

syntax :- 
class A 
{

};

*/

#include<iostream>
using namespace std;

class animal
{
    public:
    void eat()
    {
        cout<<"Animal Eating..."; 
    }
};

class cat : public animal // This is derived class
{
    public:
    void voice()
    {
        cout<<"meow meow...."<<endl;
    }
};

class dog : public animal
{
    public:
    void voice( )
    {
        cout<<"woof woof...."<<endl;
    }

};

int main()
{
    cat c;
    dog d;
    c.eat();
    c.voice();
    d.eat();
    d.voice();

    return 0;
}


// 5:47 time