#include<iostream>
using namespace std;

class thief
{
    private:
    string name;
    string address;
    string mob;

    public:
    void input()
    {
        name = "Jago roa";
        address = "New Delhi";
        mob = "7383938493";
    }
    void output()
    {
        cout<<"Thief Name : "<< name << endl;
        cout<<"Thief Address : " << address << endl;
        cout<<"Thief Mob no : " << mob << endl;
    }
};

class police : public thief //# inheritance
{

};

int main()
{
    thief T;
    T.input();
    T.output();

    cout<<"Police"<<endl;
    police p;
    p.input();
    p.output();

    return 0;
}
