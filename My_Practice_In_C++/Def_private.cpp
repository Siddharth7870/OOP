#include<iostream>
#include<string>
using namespace std;

class Teacher{
    public:
    // Properties or Attributes
    string name;
    string dept;
    string subject;
    double salary;

    // member function or method
    void changedept( string newdept )
    {
        dept = newdept;
    }
};

int main()
{
    Teacher t1;
    t1.name = "Aditiya sir";
    t1.dept = "Computer science";
    t1.subject = "C++";
    t1.salary = 75000;

    cout<<t1.name<<endl;


}