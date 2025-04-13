/*
Q.   Whatis abstract class ? full explaination
Ans  Abstract class are such classes that "you are defined" to inherit only 
.    by other classes Thae purpose of abstract classes is to provide a structure
.    to other class which you can inherit. 

# Note : i ) We can't create object for abstract class. 
,       ii ) A class which contain at least one "pure virtual function"
.            called abstract class. 

=> Syntax : 
virtual return_type function_name() = 0 ;

*/

#include<iostream>
using namespace std;

class Animal
{   
    public:
    virtual void sound( ) = 0; // Pure virtual function
    void eat()
    {
        cout<<"Eating Animal"<<endl;
    }
};

class Dog : public Animal // class Dog inherit class Animal
{
    public:
    void sound( ) // orverride
    {
        cout<<"woof woof" <<endl;
    }
};

int main()
{
    Dog D;
    D.eat();
    D.sound();
}

