#include<iostream>
using namespace std;

int main()
{
    // char Char;
    // cout << " Enter a charecter = ";
    // cin >> Char;
    // cout << int(Char); // Char to int

    int num;
    cout << " Enter a number = ";
    cin >> num;
    char Char = char(num); // integer to charecter
    cout << Char;
}