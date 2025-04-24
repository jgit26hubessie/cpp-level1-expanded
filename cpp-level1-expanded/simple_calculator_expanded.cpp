#include<iostream>
#include<cmath>
using namespace std ;

int main(){

    char Operator ;
    double Num1, Num2, radians;

    cout << "choose an operator: \n" ;
    cout << " + (addition)\n" ;
    cout << " - (subtraction)\n" ;
    cout << " * (multiplication)\n" ;
    cout << " / (division)\n" ;
    cout << " % (modulus)\n" ;
    cout << " ^ (power)\n" ;
    cout << " r (square root)\n" ;
    cout << " s (sine)\n" ;
    cout << " c (cosine)\n" ;

    cout << "enter operator: " ;
    cin >> Operator ;

    if(Operator == 's'){
        cout << "Enter angle in degree: " ;
        cin >> Num1 ;
        radians = Num1 * (M_PI / 180.0) ;
        cout << "Output = " << sin(radians) << endl ;
        return 0 ;
    }

    if(Operator == 'c'){
        cout << "Enter angle in degree: " ;
        cin >> Num1 ;
        radians = Num1 * (M_PI / 180.0) ;
        cout << "Output = " << cos(radians) << endl ;
        return 0 ;
    }

    if(Operator == 'r') {
        cout << "enter a number: " ;
        cin >> Num1 ;
        cout << "Output = " << sqrt(Num1) << endl ;
        return 0 ;
        }
    else {
        cout << "enter two numbers: " ;
        cin >> Num1 >> Num2 ;
    }    
    switch(Operator) {
        case '+' : cout << "Output = " << Num1 + Num2 ; break ;
        case '-' : cout << "Output = " << Num1 - Num2 ; break ;
        case '*' : cout << "Output = " << Num1 * Num2 ; break ;
        case '/' : 
        if(Num2 != 0){
            cout << "Output = " << Num1 / Num2 ;
        }
        else {
            cout << "error" ;
        }
        break ;

        case '%' :
        cout << "Output = " << (int)Num1 % (int)Num2 ;
        break ;
        
        case '^' : cout << "Output = " << pow(Num1, Num2) ;
        break ;

        default : cout << "Invalid" ;
    }
    return 0;
}