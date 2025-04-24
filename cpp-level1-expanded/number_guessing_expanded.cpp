#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std ;
int main(){
srand(time(0)) ;

int secNum = rand()% 100 + 1 ;
int guess ;
int attempts = 0 ;
int maxAttempts = 5 ;

cout << "Guess the number between 1 and 100\n" ;
cout << "number of attempts is " << maxAttempts ;

while(attempts < maxAttempts){
cout << "\nEnter your guess: " ;
cin >> guess ;
attempts++ ;

if(guess < secNum){
    cout << "go higher\n" ;
}
else if(guess > secNum){
    cout << "go lower\n" ;
}
if(secNum % 2 == 0){
    cout << "Hint: The number is even" ;
}
else {
    cout << "Hint: The number is odd" ;
}
if(guess == secNum){
    cout << "Congrats you guessed correct" ;
    cout << "You guessed the number in " << attempts << "attempts\n" ;
    break ;
}
}
if (attempts == maxAttempts && guess != secNum) {
    cout << "\nSorry you failed. the Secret Number is " << secNum ;
}
return 0 ;
}