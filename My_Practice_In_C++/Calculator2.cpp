#include<iostream>
using namespace std;

// Without user this code 

int main()
{   
    // for Operands like ( + , - , * , / )
    
 int a,c;
char b ;
cout << "enter operation " << endl;
cin >> a>>b>>c;
switch(b)
{case '+':
cout << a+c << endl;
break ;
case '-':
cout << a-c << endl;
break ;
case '*':
cout << a*c << endl;
break ;
case '/':
cout << a/c << endl;
break ;
default:
cout << "invalid" << endl;
}



    return 0;
}

    
