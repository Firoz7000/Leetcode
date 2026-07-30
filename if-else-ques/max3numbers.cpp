//Find the maximum of three numbers (input from user)
#include<iostream>
using namespace std;
int main(){
    int num1 , num2, num3;
    cin>> num1 >> num2>> num3;
    if(num2 < num1 && num3 < num1){
        cout << num1 ;
    }
    else if (num1 < num2 && num3 < num2){
        cout << num2;
    }
    else{
        cout << num3 ;
    }
}