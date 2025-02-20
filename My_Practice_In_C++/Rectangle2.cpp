#include<iostream>
using namespace std;

class rectangle {
    private:
    int length, width;

    public:
    void get_data(){
        cout << " Enter length = ";
        cin >> length;
        cout << " Enter width = ";
        cin >> width;
    }

    void show_data(){
        cout <<" length is = " << length << " and width is = " << width << endl;
    }

    void area(){
        cout << " Area is = " << length * width << endl;
    }
};

int main()
{
    rectangle r1;

    r1.get_data();
    r1.show_data();
    r1.area();

    return 0;
}
