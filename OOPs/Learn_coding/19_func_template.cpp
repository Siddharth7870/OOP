/*

i ) Function template : function template is also known as generic function. 
A normal function works only one type of value at a tiem but "function template"
works with different different type  at time. 

=> syntax :
template < class type > 
return_type function_name(parameter)
{ 
    // code
}

*/

// W.A.P to show the example of function template ? 

#include<iostream>
using namespace std;

template<class A>
void print(A x, A y )
{
    cout<<x <<" "<<y<<endl;
}
int main()
{
    print(10,20);
    print("Raman","Ram");
    print(84.34,83.33);
}