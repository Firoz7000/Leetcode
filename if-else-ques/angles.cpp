//Write a program to input all angles of a triangle and check whether it is valid or not
#include<iostream>
using namespace std;
int main(){
    int a, b , c;
    cin >> a >> b >> c;
    int sum = a + b + c;
    if(sum ==  180 && a > 0 && b > 0 && c > 0 ){
        cout << "valid" << endl;
    }
    else{
        cout << "invalid" << endl;
    }
}