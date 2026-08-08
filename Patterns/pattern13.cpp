#include<iostream>
using namespace std;
int main(){
    int n = 5;
    
    // Top half
    for (int i = 1; i <= n; i++){
        int space = n - i;
        for (int j = 1; j <= space; j++){
            cout << " ";
        }
        for (int k = 1; k <= i; k++){
            if (k == 1 || k == i){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
    
    // Bottom half
    for (int i = n-1; i >= 1; i--){
        int space = n - i;
        for (int j = 1; j <= space; j++){
            cout << " ";
        }
        for (int k = 1; k <= i; k++){
            if (k == 1 || k == i){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}