//Write a program to check whether a character is uppercase or lowercase.
#include<iostream>
using namespace std;
int main(){
    char ch ;
    cin >> ch;
    if(ch>='a' && ch<='z'){
        cout << "lower"<< endl;
    }
    else {
        cout <<"upper" << endl;
    }
}