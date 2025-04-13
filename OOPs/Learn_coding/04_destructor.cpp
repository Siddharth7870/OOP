/*
Q.   What is destructor ?
Ans. Destructor is also a "special type" of "members function" that is used to "Deallocate the Memory"
.    allocated by the "Constructor."

# Note :- Destructor( use tiled sign ~ )

----> Syntax :-
class A 
{
    public: 
    A() //# Constructor
    {
        // Allocated momory
    }

    ~ A() //# Destructor(~)
    {
        // Deallocated memory
    }
};

*/

#include<iostream>
using namespace std;

int count = 0; // Global variable

// create a class
class A
{
    public:
    A() //# default Constructor
    {
        cout<<"Object " << ++count <<" created" << endl;
    }

    ~A() //# Destructor(~)
    {
        cout<<"Object " << count-- <<" momory deallocate(delet)" <<endl;
    }
};

int main()
{
    A obj1,obj2,obj3; // # default constructor

}