//How do you find the index of an element in an array
#include<iostream>
using namespace std;
int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    int element  = 30;
    for(int i= 0; i< 5; i++){
        if(arr[i] == element){
        cout << "Index = " << i;
        break;
        }
    }
    return 0;
}