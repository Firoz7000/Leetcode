#include<iostream>
using namespace std;
int main(){
    int n = 5;
    for(int i = 1; i<=n; i++ ){
        int space = n - i;
        int star = 2*i - 1;
        for(int j = 1; j<=space; j++){
            cout << " " ;
        }
        for(int k = 1; k <= star ; k++){
            cout << "*";
        }
        cout << endl;
    }
    
}