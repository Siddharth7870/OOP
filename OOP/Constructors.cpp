#include<iostream>
using namespace std;

// A Create class 
class Student{
    public:
    string name ;
    int roll_No;
    float cgpa;

    Student() // Default constructor
    {

    }

    Student( int roll )
    {
        roll_No = roll;
    }

    Student( string na , int rolln)
    {
        name = na;
        roll_No = rolln;
    }
    

    // constructor 
    Student ( string n, int r, float c) // Parameterised constructor
    {
        name = n;
        roll_No = r;
        cgpa = c;

    }

    // roll cgpa name
    Student( int ro, float cg, string ne )
    {
        roll_No = ro;
        cgpa = cg;
        name = ne;
    }




   
};

int main()
{
    Student s1("Ramanand kumar", 2412242 );// constructor call
    s1.cgpa = 8.6;


    Student s2;          // Default constructor call           
    s2.name = "Siddhart";
    s2.roll_No = 2422243;
    s2.cgpa = 8.9;

    Student s3("Gagan", 13);

    Student s4(45);

    Student s5(2423 , 9.3, "Harish");

    Student s6 = s1;   // Deep copy
    s6.name = "Manish raj";

    Student s7(s1); // Copy constructor - Deep copy because s1 in value no change
    s7.name = "Vijay";





    cout << s1.name << " " << s1.roll_No << " " << s1.cgpa << endl;
    cout << s2.name << " " << s2.roll_No << " " << s2.cgpa << endl;
    cout << s3.name << " " << s3.roll_No << " " << endl; //s3.cgpa << endl;
    cout << s4.roll_No << endl;
    cout << s5.name << " " << s5.roll_No << " " << s5.cgpa << endl;
    cout << s6.name << " " << s6.roll_No << " " << s6.cgpa << endl;
    cout << s7.name << " " << s7.roll_No << " " << s7.cgpa << endl;


    return 0 ;
}