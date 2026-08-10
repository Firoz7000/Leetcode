#include<iostream>
using namespace std;
int main(){
    int n = 5 ;
    for (int i = 1; i<= n ; i++){
        for (int k = 1; k<=n ; k++){
            if(i %2 != 0){
                cout << "*";
            }
            else if (i < n/2 + 1){
                if(k ==1 ){
                cout << "*";
                } else{
                    cout << " ";
                }
            }
            else{
                if( k == n){
                    cout << "*";
                }
                else{
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
}