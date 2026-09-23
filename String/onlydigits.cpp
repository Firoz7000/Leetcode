#include<iostream>
#include<cctype>
using namespace std;
int main(){
    string s = "123a4";
    bool check = true;
    for(int i = 0; i<s.length(); i++){
        if(!isdigit(s[i])){
            bool check = false;
            break;
        }
    }
    if(check){
        cout << "Only Digit ";
    }
    else{
        cout << "Not only digit ";
    }
}