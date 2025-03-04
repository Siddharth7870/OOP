// Function inside class 
// -> print all the details of a  given object

#include<iostream>
#include<string>
using namespace std;

// this keyword example


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

    void print(int runs )
    {
        //cout << name << " " << runs << " " << avg << endl;
        cout << this->name << " " << this->runs << " " << this->avg << endl;
        cout << this->name << " " << runs << " " << this->avg << endl;
        cout << runs << endl;
        
    }

    int matches()
    {
        return runs/avg;
    }

    
    
};

// void print( Cricketer c )
//     { 
//     cout <<c.name << " " << c.runs << c.avg << endl;
    
//     }


    
int main()
{   
    Cricketer c1( "Virat Kohli", 25000, 55.2);
    Cricketer c2( "Rohit Sharma", 18000, 47.8);

    // print(c1); 
    // print(c2);

    c1.print(99);
    c2.print(100);
    cout << c1.matches() << endl;
    cout << c2.matches() << endl;
    
    return 0;
}