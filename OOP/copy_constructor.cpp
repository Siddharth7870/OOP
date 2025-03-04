#include<iostream>
#include<string>
using namespace std;


class Teacher {
    private:
    double salary;

    public:
    string name;
    string dept;
    string sub;

    // copy constructor
    Teacher( string n, string d, string s, double sal)
    {
        name = n;
        dept = d;
        sub = s;
        salary = sal;
    }

    void getInfo()
    {
        cout << "Teacher Name = " << name << endl;
        cout << "Department = " << dept << endl;
        cout << "Subject = " << sub <<endl;
        cout << "Salary = " << salary << endl; 
    }

};

int main()
{
    Teacher t1( "Aditiy sir", "CS", "C++", 85000);
    //t1.getInfo(); 

    Teacher t2(t1); // default copy constructor -invoke
    t2.getInfo();

    return 0;
}