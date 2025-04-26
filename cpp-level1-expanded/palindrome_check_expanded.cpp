#include<iostream>
#include<string>
#include<algorithm>

using namespace std ;

bool isPalindrome(string str){

    string clean = "" ;
    for (char c : str){
        if (c != ' ') {
            clean += tolower(c) ;
        }
    }

int start = 0, end = clean.length() - 1 ;
while (start < end){
    if (clean[start] != clean[end])
    return false ;
    start++ ;
    end-- ;
}
    return true ;
}

int main (){
    string input ;
    char choice ;

    do {
        cout << " Enter a word or a sentence or a number : " ;
        getline(cin, input) ;

        if (isPalindrome(input)){
        cout << "it is a palindrome.\n" ;
        }
        else {
        cout << "it is not a palindrome.\n" ;
        }

        cout << "Do you want to check a new one?(yes or no) : " ;
        cin >> choice ;
        cin.ignore() ;
    }
    while (choice == 'y' || choice == 'y' ) ;

    cout << "Thanks for using palindrome checker\n" ;

    return 0 ;
}