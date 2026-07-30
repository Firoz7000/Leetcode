#include<iostream>
using namespace std;
int main(){
    double num1 , num2;
    char op;
    cin >> num1 >> op >> num2;

 if (op == '+') {
    cout << num1 + num2;
 }
 else if (op == '-') {
    cout << num1 - num2;
 }
 else if (op == '*') {
    cout << num1 * num2;
  }
 else if (op == '/' ) {
    if(num2 != 0){
        cout << num1 / num2 ;
    }
    else{
        cout << "Cannot divide by zero" ;
    }
 }
 else {
    cout << "Invalid operator";
 }
   
}