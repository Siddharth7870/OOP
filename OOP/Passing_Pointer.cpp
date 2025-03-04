#include<iostream>
#include<string>
using namespace std;

// Passing Objects to functions
// by default -> pass by value
// by & -> pass by reference

// Object Pointer  ->> very most important
// 
// 


class Cricketer{
    public:
    string name;
    int runs;
    float avg;

    Cricketer( string name, int runs, float avg )
    {
        this->name = name;
        this->runs = runs;
        this->avg = avg;
        
    }
};

//void change( Cricketer& c ) // used & to change avg
// void change( Cricketer c ) // used normal to not change avg
// {
//     c.avg = 77.2; // No change because pass by value
// }

void change( Cricketer* c ) // used D reference
{
   // (*c).avg = 77.2; // avg change because pass by address
    c->avg  = 87.3;

}


int main()
{   
    Cricketer c1( "Virat Kohli", 25000, 55.2); // Constructor call 
    // Cricketer c2( "Rohit Sharma", 18000, 47.8);

    // cout << " avg is : " << c1.avg <<endl;
    // change(&c1);
    // cout << "call change avg : " << c1.avg << endl;

    // Cricketer* ptr = &c1;
    // cout <<"Using Pointer print runs :" <<  (*ptr).runs << endl;
    // cout << "Before pointer avg : " << c1.avg << endl;

    // (*ptr).avg = 77.5;
    // cout <<"pointer through change avg : " << c1.avg << endl;

    Cricketer* ptr = &c1;
    cout <<"Using Pointer print runs :" <<  ptr->runs << endl;
    cout << "Before pointer avg : " << c1.avg << endl;

    ptr->avg = 77.5;
    cout <<c1.avg << endl;
    // Notes : (*ptr).avg -> ptr->age

    
    return 0;
}