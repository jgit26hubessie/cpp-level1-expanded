#include<iostream>
#include<string>
using namespace std ;

int main(){
    int startNum, endNum, Limit ;
    string reverse ;

    cout << "Enter the starting number : " ;
    cin >> startNum ;
    cout << "Enter the endinging number : " ;
    cin >> endNum ;
    cout << "Enter the limit : " ;
    cin >> Limit ;
    cout << "Do you want the table in reverse order (yes/no): " ;
    cin >> reverse ;

    
    for (int num = startNum; num <= endNum; num++ ){
        cout << "\nMultiplication table of " << num << ": \n" ;

        if (reverse == "yes" || reverse == "yes"){
            for (int i = Limit ; i >= 1; --i){
                cout << num << "x" << i << " = " << num * i << endl ;
            }
        }
        else{
            for (int i = 1; i <= Limit; ++i ){
                cout << num << "x" << i << " = " << num * i << endl ;
            }
        }  
    }

    return 0 ;
}