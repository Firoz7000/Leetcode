#include<iostream>
using namespace std;
int main(){
    string str ;
    cin >> str;
    int n = str.size();

    for(int i = 0; i<n; i++){
        for(int j = i; j<n; j++){

            for(int k = i; k<= j; k++){
                cout << str[k];
            }
            cout<< endl;
        }
    }
}