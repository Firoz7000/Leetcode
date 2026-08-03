#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    bool isPrime = true;
    
   for(int i = 2; i<n; i++){
    if(n%i == 0){
    isPrime = false;
    }
    }
    if(n<= 1){
        isPrime = false;
    }
    if(isPrime){
        cout<< "Prime";
    }
    else{
        cout<<"Not a Prime ";
    }

}