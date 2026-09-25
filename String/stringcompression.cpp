#include<iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    int n = str.size();

    for(int i = 0; i<n; i++){
        int count = 1;
        while(i+1 < n && str[i] == str[i+1]){
            count++;
            i++;
        }
        cout << str[i] << count;
    }
}