#include<iostream>
using namespace std;
int main(){
    int base , exponent ;
    cin >> base >> exponent ; 

    int result = 1;
    for (int i = 1 ; i<= exponent ; i++){
        result = result * base;
    }
    cout << result << endl;
}