#include<iostream>
using namespace std;

class market{
    public:
    string item_name;
    int quntities;
    int price;
    
};

int main()
{
    market m1;
    m1.item_name;
    m1.quntities;
    m1.price = 30;
    cout<<"vegetable tomato, potato, bringle, onione";

    int tomato = 15;
    int potato = 25;
    int bringle = 15;
    int onione = 20;
    int chill = 45;
    
    
    cout<< "tomato = 15/kg"<<endl;
    cout<<"potato = 25/kg"<<endl;
    cout<<"bringle = 15/kg"<<endl;
    cout<<"onione = 20/kg"<<endl;
    cout<<"chill = 45/kg"<<endl;
    
   cout<<"Enter the item name = ";
   cin >> m1.item_name;
   cout<<"Enter the quntities = " ;
   cin>> m1.quntities;

   

   if(m1.item_name == tomato)
   {
    int total_price = = m1.quntities * tomato;
    cout<< total_price; 
   }

   else if( m1.item_name == potato)
   {
    int tota_price = m1.quntities * potato;
    cout<< tota_price;
   }

   else if ( m1.item_name == bringle)
   {
    int total_price = m1.quntities * bringle;
    cout<< total_price;
   }
    
   else if ( m1.item_name == onione )
   {
    int total_price = m1.quntities * onione;
    cout<< total_price;
   }

   else if( m1.item_name == chill )
   {
    int total_price = m1.quntities * chill;
    cout<< total_price;
   }

   else{ cout << " I have no this item! "}
  
   
   return 0;

}