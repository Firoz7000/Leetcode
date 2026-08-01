#include<iostream>
#include<string> 
using namespace std;
int main (){
    int count = 0 ;
    char ch ;
    string sentence ;
    getline(cin, sentence);
    for(int i = 0; i< sentence.length(); i++){
        char ch = sentence[i];
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||ch =='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
            cout << sentence[i];
            count = count+1;
        
        } 
    }
    cout << count;
}