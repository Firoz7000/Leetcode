#include<iostream>
using namespace std;
int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    int max = arr[0];
    for(int i = 0; i<=4; i++){
        if(arr[i] > max){
          max = arr[i];
        }
    }
    int min = arr[0];
    for(int i = 0; i<=4; i++){
        if(arr[i] < min){
          min = arr[i];
        }
    }
    cout << "Difference between two elements : " << (max - min );
    
}