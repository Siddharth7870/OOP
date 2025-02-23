#include<iostream>
using namespace std;

int main()
{
    float PI = 3.14;
    float Radius;
    cout << " Enter Radius = ";
    cin >> Radius;
    float volume = ( PI * Radius * Radius * Radius) * 4/3;
    cout << " Volume of Sphere = " << volume;
    

}