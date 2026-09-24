#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin, str);

    string result = "";
    bool makeUpper = false;

    for(char ch : str){
        if(ch == ' '){
            makeUpper = true;
        }
        else{
            if(makeUpper){
                result += toupper(ch);
                makeUpper = false;
            }
        }
    }
}