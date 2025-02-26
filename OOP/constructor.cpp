#include<iostream>
#include<string>
using namespace std;

class Teacher{
    private:
    double salary;

    public :
    Teacher()
    {
        cout<<"Hi, I am costructor! \n"; 
        dept = "Computer science ";// initialisation constructor
    }

    string name;
    string dept;
    string sub;

    void setsalary( double s)
    {
        salary = s;
    }

    double getsalary()
    {
        return salary;
    }


};

int main()
{
    Teacher t1;// constructor call 
    t1.name = "Aditiya sir";
    t1.sub = "C++";
    t1.setsalary(395958);

    cout<<"Name = " << t1.name <<endl;
    cout<<"Department = " << t1.dept << endl; // no value but print because constructor helps
    cout<<"Subject = " << t1.sub <<endl;
    cout<<"Salary = " << t1.getsalary(); 

    return 0;
}