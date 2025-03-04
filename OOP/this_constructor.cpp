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

    // this->prop  constructor
    Teacher( string name, string dept, string sub, double salary)
    {
        this->name = name;
        this->dept = dept;
        this->sub = sub;
        this->salary = salary;
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
    t1.getInfo();

    return 0;
}