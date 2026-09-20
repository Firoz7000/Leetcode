#include<iostream>
using namespace std;
int main(){
    string str = "I Love Programming ";

    int count = 0;
    int maxLength = 0;

    for(int i=0; i<str.length(); i++ ){
        if(str[i] != ' ' && str[i] != '\0'){
            count++;
        }
        else{
            if(count>maxLength){
                maxLength = count;
            }
            count = 0;
        }
    }
    cout << "Longest word length = " << maxLength;
}