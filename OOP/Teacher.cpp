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

};

int main(){

    Teachar t1;
    t1.name = "Siddharth";
    t1.dept = " Computer Science ";
    t1.subject = " C++ ";
    t1.salary = 350000;

    cout << t1.name << endl;
    cout << t1.dept << endl;
    cout << t1.subject << endl;
    cout << t1.salary << endl;


    return 0;
}