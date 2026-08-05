#include<iostream>
using namespace std;
int main(){
    int n = 5;
    for(int i = 1; i <= n; i++){
        int space = n - i;
        for(int j = 1; j <= space; j++){
            cout << " ";
        }
        cout << "*";
        cout << endl;
    }
}