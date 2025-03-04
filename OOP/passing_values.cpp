#include<iostream> 
using namespace std;

class Car
{
    public :
    string name;
    int price ;
    int seats;
    string type;

};

void print( Car c) // A function create
{
    cout << c.name << " " << c.price << " " << c.seats << " " << c.type <<endl;
}

void change(Car &c ) // Pass by reference
{   
    c.name = "Audi AB";
  
}
int main()
{
   Car c1;
    c1.name = "Honda City";
    c1.price = 15000000;
    c1.seats = 5;
    c1.type = "Sedan";

    print( c1 ); // pass by value
    change( c1 );
    print( c1 ); // pass by address becuase use &

    return 0;
}