#include <iostream>
using namespace std;

int rectangle(int length, int width)
{

   return  (length * width);

}

int main()
{
    int length, width;

    cout << " Enter of rectangle length = ";
    cin >> length;
    cout << "Enter of rectangle width = ";
    cin >> width;

    cout << "Here is Area of rectangle = " << rectangle(length,  width) << endl;
    return 0;
}
