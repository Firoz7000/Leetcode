#include<iostream>
using namespace std;
int main(){
    string str = "firoz khan";

    str[0] = toupper(str[0]);

    for(int i=1; i<str.length();i++){
        if(str[i-1] == ' '){
            str[i] = toupper(str[i]);
        }
    }
    cout << str;
}