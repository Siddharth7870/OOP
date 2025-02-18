#include<iostream>
#include<string.h>
using namespace std;

class student{
    // Propeties/Attributes
    public:
    string name;
    int age;
    string subject;
    int roll_no;
    float cgpa;
};

int main()
{
    student s1; // Object of student class
    s1.name = "Ramanant";
    s1.age = 19;
    s1.subject = " C++ ";
    s1.roll_no = 242241;
    s1.cgpa = 9.8;

    cout << s1.name << endl;
    cout << s1.age << endl;
    cout << s1.subject << endl;
    cout << s1.roll_no << endl;
    cout << s1.cgpa << endl;

    return 0;
}
