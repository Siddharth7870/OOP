/*
Q.    What is abstraction ? full explaination. 
Ans.  Data abstraction is a technique by which only "Necessary data" is "Show" to 
,     the user and "Unnecessary daya" is "Hidden". 

*/

//Q.  W.A.P to show the simple example of data abstraction.

#include<iostream>
using namespace std;

class MyBank
{
    private:
    int ATM_PIN;
    int Balance;

    public:
    string Bank_Name;
    string Holder_Name; //# Necessary data
    string IFSC_CODE;
    string Account_no; //# Necessary data
    string Address;
    string Village_Name;
    int Pin_Code;
    // int ATM_PIN; //# Unnacessary data
    // int Balance; //# Unnacessary data

    void input()
    {
        Bank_Name = "State Bank of India";
        Holder_Name = "Ramanand Kumar";
        IFSC_CODE = "SBIN0002739";
        Account_no = "43664571720";
        ATM_PIN = 7777;
        Balance = 55050000;
        Address = "Nima,Hathiyar,Bodhgaya";
        Village_Name = "Niman";
        Pin_Code = 824231;
    }

    void output()
    {
        cout<<"---> My Bank Details <---"<<endl;
        cout<<"Bank Name : " << Bank_Name <<endl;
        cout<<"Holder Name : " << Holder_Name <<endl;
        cout<<"IFSC Code : " << IFSC_CODE <<endl;
        cout<<"Account Number : " << Account_no << endl;
        cout<<"ATM PIN : " << ATM_PIN << endl;
        cout<<"Balance : " << Balance << endl;
        cout<<"Address : " << Address << endl;
        cout<<"Village Name : " << Village_Name << endl;
        cout<<"Pin Code : " << Pin_Code <<"\n" <<endl;
        
    }

};

int main()
{
    MyBank M;
    M.input();   //# calling void input
    M.output();  //# calling void output

    cout<<"Ram tring to access my account ...." << endl;
    cout<<"Bank Name : " << M.Bank_Name <<endl;
    cout<<"Holder Name : " << M.Holder_Name <<endl;
    cout<<"IFSC Code : " << M.IFSC_CODE <<endl;
    cout<<"Account Number : " << M.Account_no << endl;
    //cout<<"ATM PIN : " << M.ATM_PIN << endl;  //# can not access because this is Unnecessary data
    //cout<<"Balance : " << M.Balance << endl;  //# can not access
    cout<<"Address : " << M.Address << endl;
    cout<<"Village Name : " << M.Village_Name << endl;
    cout<<"Pin Code : " << M.Pin_Code << endl;


    return 0;
}