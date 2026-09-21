#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "aabbccc";

    int freq[256] = {0};
    for(int i = 0; i<s.length(); i++){
        freq[s[i]]++;
    }

    int max = 0;
    int secondmax = 0;

    for(int i = 0; i<256; i++){
        if(freq[i] > max){
            max = freq[i];
        }
    }
    for(int i = 0; i<256; i++){
        if(freq[i] > secondmax && freq[i] < max){
            secondmax = freq[i];
        }
    }
    for(int i = 0; i<256; i++){
        if(freq[i] == secondmax){
            cout << char(i);
            break;
        }
    }
}