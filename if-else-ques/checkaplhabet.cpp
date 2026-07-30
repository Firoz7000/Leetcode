//Check whether a given character is an alphabet or not
#include<iostream>
using namespace std;
int main(){
    char ch ;
    cin >> ch;
    if(ch >= 'a' && ch<='z' || ch>= 'A' && ch<='Z'){
        cout << "The charcter is Alphabet" << endl;
    }
    else{
        cout << "its not a Alphabet" << endl;
    }
}