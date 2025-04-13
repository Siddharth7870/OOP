/*
Q.1-> What is class and object ?
Ans.-> class is a "user define datatype" it has its own "data memberss" and 
----->member function which are used by creating an "instanse of the class".

syntax :
class  class_name
{
    //data member;// by default private
    
    public:
    // member function;
};


# Note : By default the access specifiers of class  is "private". 


----->Object : object is an "instanse of class" that have state and behaviour. 
*/



#include<iostream>
using namespace std;

class Person
{
    private:
    int run; // data member
    string msg;// data member

    public:
    void play() // member function
    {
        run = 50;
        cout <<"Today i scored\t" << run << "runs" << endl;
    }
    void walk() // member function
    {
        msg = "Today i walked 3 kilometers";
        cout <<msg;
    }
};

int main()
{
    Person ob;
    ob.play();
    ob.walk();

    return 0;
}

