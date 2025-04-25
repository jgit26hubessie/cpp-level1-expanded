#include<iostream>
using namespace std ;

    long long fibonacci(int n){
        if (n == 0) return 0 ;
        else if(n == 1) return 1 ;
        else return fibonacci(n-1) + fibonacci(n-2) ;   
    }

    void printIterative(int n){
        long long a = 0, b = 1, next ;
        cout << "Iterative sequence:\n" ;
        for (int i = 0 ; i < n; ++i){
            cout << a << " " ;
            next = a+b ;
            a = b;
            b = next ;
        }
        cout << endl ;
    }
    void printRecursive(int n){
        cout << "Recursive sequence:\n" ;
        for (int i = 0; i < n; ++i){
            cout << fibonacci(i) << " " ;
        }
        cout << endl ;
}
int main(){
int choice, n ;

    cout << "1(Iterative)\n" ;
    cout << "2(Recursive)\n" ;
    cout << "Enter choice: " ;
    cin >> choice ;

    cout << "Enter the number of fibonacci terms: " ;
    cin >> n ;

    if(choice == 1) {
        printIterative(n) ;
    }
    else if( choice == 2){
        printRecursive(n) ;
    }
    else {
        cout << "Invalid choice" ;
    }
return 0 ;
}