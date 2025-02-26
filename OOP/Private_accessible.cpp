#include<iostream>
#include<string>
using namespace std;

class Teacher {
    private:
    // properties
    double salary;
    
    public:
    string name;
    string dept;
    string sub;

    // methods
    // setter
    void setsalary( double s )
    {
        salary = s;
    }

    double getsalary( )
    {
        return salary;
    }


};

int main()
{
    Teacher t1;
    t1.name = "Aditiya sir";
    t1.dept = "Computer science";
    t1.sub = "C++";
   // t1.salary = 85000;
    t1.setsalary( 85000);

    cout <<t1.name <<endl;
    cout<<t1.getsalary()<<endl;
    return 0;
}
