#include<iostream>
#include<string.h>
using namespace std;

class Teachar {
    public:
    // Properties/ attributes
    string  name;
    string  dept;
    string  subject;
    double salary;

    // method / members function
    void changeDept( string newDept ){
        dept = newDept;
    }

    void setSalary( double s ){
        salary = s;
    }

    double getSalary( ){
        return salary;
    }

};

int main(){

    Teachar t1;
    t1.name = "Siddharth";
    t1.dept = " Computer Science ";
    t1.subject = " C++ ";
    // t1.salary = 350000;
    t1.setSalary(350000);

    cout << t1.name << endl;
    cout << t1.dept << endl;
    cout << t1.subject << endl;
    // cout << t1.salary << endl;
    cout << t1.getSalary() << endl;


    return 0;
}