#include<iostream>
#include<string>
using namespace std;

// class name 
class Account{
    private:
    // data/properties
    string password;
    double balance; // data hiding

    public:
    string username;
    string accountId;

    // member function 
    // setter
    void set_bala(  double bala)
    {   
       
        balance = bala;
    }
    void set_pass(  string pass)
    {   
       
        password = pass;
    }

    // getter
    double get_bala()
    {
        return balance;
    }
    // getter
   string get_pass()
    {
        return password ;
    }
   
};

int main()
{
    Account A1;
    A1.username = "Ramanand ";
    A1.accountId = "D58373HId";
    A1.set_bala(384830);
    A1.set_pass("Feadfh8383");

    cout<<"Your username = " << A1.username<< endl;
    cout<<"Your Account Id = "<<A1.accountId<<endl;
    cout<<"Your balance = "<<A1.get_bala()<<endl;
    cout<<"Your password = "<<A1.get_pass()<<endl;
    
    return 0;
}