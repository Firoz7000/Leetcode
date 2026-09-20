#include<iostream>
using namespace std;
int main(){
    string str = "apple";

    char target = 'p';
    int count = 0;
    for(int i = 0; i<str.length(); i++){
        if(str[i] == target){
            count++;
        }
    }
    cout<< "Number of Occurence: "<<count;
}