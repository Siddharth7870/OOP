#include<iostream>
using namespace std;

int main()
{
    // a % b = a
    // a % a = 0
    // a % ( -b ) = a % b
    // ( -a ) % b = - [ a % b ]
    int a = 3 , b = 9;
    cout << " IMP Modulus = " << a % b; // O/P -> 3
    cout << " a % ( - b ) = " << a % ( -b ); // O/P -> 3

}