/*
Q.  W.A.P to add two numbers using friend function.
*/

#include<iostream>
using namespace std;

class Sudheer;
class Chandan
{
    private:
    int p1;

    public:
    void ihave()
    {
        p1 = 10;
    }
    friend void Ramanand ( Chandan m1, Sudheer m2 );
};

class Sudheer
{
    private:
    int p2;

    public:
    void ihave()
    {
        p2 = 10;
    }
    friend void Ramanand( Chandan m1, Sudheer m2);
};

void Ramanand( Chandan m1, Sudheer m2 )
{
int R;
    R = m1.p1 + m2.p2;
    cout <<"Thank you Chandan and Sudheer!"<< endl;
    cout <<"Finaly store money : " << R <<endl;
}



int main()
{
    Chandan Ch;
    Ch.ihave();
    Sudheer Su;
    Su.ihave();
    Ramanand( Ch,Su );

}