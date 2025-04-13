/*

Q.    What is friend class ? full expalaination. 
Ans.  If a class become a "friend class" to a "other class"  then it can "Access" 
,     all "private and protected" member of that class. 

# Note : friend class is declared always with "friend keyword". 

---> Syntax : friend  class_name;

*/

//Q.  W.A.P to show the example of friend class ?

#include<iostream>
using namespace std;

class A 
{
    int a, b;
    public:
    void input()
    {
        a = 10; b = 20;
    }
    friend class B; //# friend class
};

class B
{
    int c;
    public:
    void add( A r) //# class(A) r as refres
    {
        c =r.a + r.b;
        cout <<"Access class A all member : " << c << endl;
    }
};

int main()
{
    A a;
    a.input(); //# calling "void input()"
    B b;
    b.add(a); //# calling " void add()"

    return 0;
}