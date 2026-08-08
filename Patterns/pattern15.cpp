#include<iostream>
using namespace std;
int main(){
    int n = 5;
    for(int i = 1; i<=n ; i++){
        for (int k = 1; k <= i; k++){
            if(i == n || k == 1 || k == i){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}