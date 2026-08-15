#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 4, 3, 5};
    int n = 5;
    bool isSorted = true;
    for(int i = 0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            isSorted = false;
        }
    }
    if(isSorted == true){
        cout << "Array is Sorted";
    }
    else{
        cout << "Not Sorted";
    }
}