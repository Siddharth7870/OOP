/*
Q.    What is Encapsulation ? full explaination. 
Ans.  Encapsulation is the concept of "OOPs". That is used to "Wrap" the "Data member" and
,     "Member function" into a "Single unint" .

# Note : The main purpose of encapsulataion is to "Secure the data".That's 100% secure. 

---> Syntax : 
class A 
{
    private :
    // data member

    public: 
    // member function
};

Q.   W.A.P  to show the exaple of encapsulation. 

*/

#include<iostream>
using namespace std;

class thief
{
    private:
    string name;
    string address;
    string mob;

    public:
    void input()
    {
        name = "Jago roa";
        address = "New Delhi";
        mob = "7383938493";
    }
    void output()
    {
        cout<<"Thief Name : "<< name << endl;
        cout<<"Thief Address : " << address << endl;
        cout<<"Thief Mob no : " << mob << endl;
    }
};

int main()
{
    thief T;
    T.input();
    T.output();

    return 0;
}



