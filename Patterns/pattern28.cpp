#include<iostream>
using namespace std;
int main(){
    int n = 5;
    for(int i = 1; i<=n; i++){
        for(int k = 1; k<=n ; k++){
            if(i ==1 || i == 3 || i ==5){
                cout << "*";
            }
            else if(k ==1) {
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}