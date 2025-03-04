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

int main()
{   
    // Cricketer c1( "Virat Kohli", 25000, 55.2); // Constructor call 
    // Cricketer c2( "Rohit Sharma", 18000, 47.8);

    int x = 4, y = 4;

    cout << &x << endl; // address of x = 0x61ffOc
    //cout << &y << endl;
    int* ptr = &x;  // address of x store always *ptr

    cout << ptr << endl; // address of store x in ptr = 0x61ffOc
    cout << *ptr << endl; // address of ptr in value  x store to print = 4
    
    *ptr = 100; // D reference Operator 
    cout << "Value of x : " << x << endl;

    return 0;
}