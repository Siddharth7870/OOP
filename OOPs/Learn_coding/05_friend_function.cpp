/*
Q.    What is friend function ? 
Ans.  Friend function is a function which is "not" the member of "class" instead of 
,     it can access "private" and "protected" member of class. 

# Note : friend function is declared with "keyword friend". 
# Note : using friend function use,can work with two different classes members. 

---> Syntax : friend return_type function_name( class ref() );

*/

#include<iostream>
using namespace std;

class Ranjeet
{
    private:
    string tv;

    public:
    void show()
    {
        tv = " Today Balveer episode 399.";
    }

    friend void Ramanand(Ranjeet chair);
};

void Ramanand( Ranjeet chair )
{
    cout<<"I am watching tv at Ranjeet home." << chair.tv;
}

int main()
{
    Ranjeet T;
    T.show();
    Ramanand(T);
    return 0;
}