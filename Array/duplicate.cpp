#include<iostream>
using namespace std;
int main(){
    int arr[] = {10, 10, 20, 30, 30, 30, 40};
    int n = 7;
    int index = 0;
    for(int i = 1; i<n; i++){
        if(arr[i] != arr[index]){
            index++;
            arr[index] = arr[i];
        }
    }
    int newSize = index+1;
    for(int i = 0; i< newSize; i++){
        cout << arr[i] << " ";
    }
}