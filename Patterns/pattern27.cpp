#include<iostream>
using namespace std;
int main(){
    int n = 5;
    for(int i = 1; i <= n; i++){
        for(int k = 1; k <= n; k++){
            if(i == 1){
                cout << "*";
            }
            else if(i == 2 || i == 3){
                if(k == 3) cout << "*";
                else cout << " ";
            }
            else if(i == 4){
                if(k == 1 || k == 3) cout << "*";
                else cout << " ";
            }
            else{
                if(k == 2 || k == 3) cout << "*";
                else cout << " ";
            }
        }
        cout << endl;
    }
}