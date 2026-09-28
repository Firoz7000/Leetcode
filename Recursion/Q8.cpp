#include<iostream>
using namespace std;
int power (int base , int exponenet){
    if(exponenet == 0){
        return 1;
    }
    return base * power(base, exponenet-1);
}
int main(){
    int base = 2;
    int exponenet = 5;
    cout << power(base, exponenet);
}