#include<iostream>
using namespace std;

int main()
{
    int number;
    cout << " Enter a Number = ";
    cin >> number ;
    if( number % 2 == 0 )
    {
        cout << "This number is even";
    }

    else{
        cout << " This number is odd";
    }
}