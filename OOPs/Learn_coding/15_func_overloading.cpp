/*

Q.   What is function overloading? 
Ans. Whenever a  class contains more then one " method(function) " with 
,    " Same name " but defferent types of " Parameter "  is called 
,    " function overloading" Or "compiltime polymorphism" Or "early binding"
,    "Static polymorphism".  

# Note : This polymorphism exist at the time of compilation. 
# Note : Compiltime polymorphism is also knowns as "early binding " or
,        Static polymorphism


====> Syntax : 
class A 
{
    public: 
    void add( ) // No parameter
    {
    
    }

    void add( int a ) //#  a parameter
    {
    
    }

    void add( int a , float b  ) //# Two parameter 
    {
    
    }


}; 

*/

#include<iostream>
using namespace std;

class A 
{
    int num1, num2, add, sub;

    public:
    void calculate()  //# None parameteriz
    {
        cout<<"Enter first number : ";
        cin>>num1;
        cout<<"Enter second number : ";
        cin>>num2;
        add = num1 + num2;
        cout<<"Addition : " << add << endl;
    }

    void calculate(int a , int b ) //# parameteriz function
    {
        sub = a - b ;
        cout<<"subtraction : " << sub <<endl;
    }

};

int main()
{
    A obj;
    obj.calculate(); 
    obj.calculate(100 , 200 );


    return 0;
}