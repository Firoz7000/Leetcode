#include<iostream>
using namespace std;
int main(){
    string str = "Hello World";

    for(int i = 0; i<str.length(); i++){
        if(str[i] != ' '){
            cout << str[i];
        }
    }
}