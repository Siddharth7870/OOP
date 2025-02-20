#include<iostream>
using namespace std;

int add( int a, int b ){
    return a + b;
}

float add( float a, float b ){
    return a + b;
}

double add( double a, double b ){
    return a + b;
}

int add( int a , int b, int c ){
    return a + b + c ;
}

int main()
{
    int int1 = 10, int2 = 20;
    float float1 = 10.5, float2 = 20.7;
    double double1 = 10.123, double2 = 20.456;

    cout << " Addition of two numbers! for integers : " << add( int1 , int2 ) << endl;
    cout << " Addition of two numbers! for float : " << add( float1 , float2 ) << endl;
    cout << " Addition of two numbers! for double : " << add( double1 , double2 ) << endl;
    cout << " Addition of two numbers! for integer : " << add( int1 , int2 ) << endl;

    return 0;
}