#include<iostream>
using namespace std;
int main(){
    int n = 5;
    for(int i = 1; i<=n; i++){
        for(int k = 1; k<=n; k++){
            if(i == 1 || i == n || k == (n- i + 1)){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}