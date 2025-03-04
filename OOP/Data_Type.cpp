#include<iostream>
#include<string>
using namespace std;

class Car
{ 
    public:
    string name;
    int price;
    int seats;
    string type;
};

void print( Car c) // A function create
{
    cout << c.name << " " << c.price << " " << c.seats << " " << c.type <<endl;
}

int main()
{
    Car c1;
    c1.name = "Honda City";
    c1.price = 15000000;
    c1.seats = 5;
    c1.type = "Sedan";

    Car c2;
    c2.name = "Maruti swift";
    c2.price = 70000000;
    c2.seats = 6;
    c2.type = "hatchback";

    Car c3;
    c3.name = "Totota Fortuner";
    c3.price = 360000000;
    c3.seats = 8;
    c3.type = "SUV";

    // cout << c1.name << "  " << c1.price <<"  " << c1.seats << " " << c1.type <<endl;
    // cout << c2.name << " " << c2.price << "  " << c2.seats << " " << c2.type << endl;
    // cout << c3.name << " " << c3.price << "  " << c3.seats << " " << c3.type << endl;

    print( c1 ); // Function call 
    print( c2 ); // Function call 
    print( c3 ); // Function call 

    return 0;
}