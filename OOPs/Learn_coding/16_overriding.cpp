/*

Q.   What is function overriding ? 
Ans. Whenever we writing method in "Base" and "Derived" class in such a way
,    that function name "parameters" must be same called "function overriding". 
     
# Note : i ) This polymorphism exists at the time of execution of program is called
,            "Runtimes polymorphism".

,       ii ) Runtime polymorphism is also known as "Late binding" Or
,            "Dynamic polymorphism". 

# Note : virtual use stop function. 

--> function overiding problem : In this case use can't call the "Base class" 
,                                function using the "derived class" object is known
,                                as "function overriding problem". 

--> Syntax : 
class A  //# Base class 
{
    public:
    void add( )
    {

    }
};

class B : public A  //# derived class -> base class inherite
{
    public:
    void add()
    {
    
    }
};


*/

#include<iostream>
using namespace std;

class A 
{
    public:
    //void person()
    virtual void person()
    {
        cout<<"Good morning base!" <<endl;
    }
};

class B : public A
{
    public:
    void person()
    {
        cout<<"Good Night derived!"<<endl;
    }
};

int main()  
{
    // B obj;
    // obj.person();
    // // obj.A::person();

    A *ptr;
    B obj;
    ptr=&obj;
    ptr->person(); //#  जिसका pointer उसी को call( class A )

}

// 6:6 time
