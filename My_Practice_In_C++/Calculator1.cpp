#include<iostream>
using namespace std;

int main()
{   
    // for Operator op
    char op;

    // variable declaretion for number
    float num1, num2;

    // A message for user
    cout << "Enter Operator : ( +, -, *, / ) = ";

    // for scanf Operator
    cin >> op;

    // for user type any two number
    cout << " Enter two Number( operand ) = ";
    cin >> num1 ;
    cout << " Enter second Number( operand ) = ";
    cin >> num2 ;

    // using switch stetament 
    switch( op ) 
    {   
        // for Addition case '+'
        case '+' : cout << "Addition is -> " << num1 << " + " << num2 << " = " << num1 + num2 ;
        break ;

        // for Subtracation case '-'
        case '-' : cout << " Subtracation is -> " << num1 << " - " << num2 << " = " << num1 - num2 ;
        break;

        // For Multiplication case '*'
        case '*' : cout << " Multiplication is -> " << num1 << " * " << num2 << " = " << num1 * num2 ;
        break;

        // for  Division case '/' but a condition
        case '/' : if( num1 >= 1 && num2 >= 1 )
        {
        cout << " Divided is -> " << num1 << " / " << num2 << " = " << num1 / num2;
        }
        else{cout << " Please check your number ";}
        break;

        //  for modular operator '%' with a condition
        case '%' : if( num1 >= 1 && num2 >= 1 )
        {                                                            
            cout <<" Modular id -> " << static_cast<int>(num1) << " % " << static_cast<int>(num2) << " = " << static_cast<int>(num1) % static_cast<int>(num2) ;
        }
        else{cout << " Please check your number ";}
        break;

        default :
        cout << "Please check your operand " << endl;
        break;
    }
}