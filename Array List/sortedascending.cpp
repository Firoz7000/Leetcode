//check if array is sorted in ascending order
#include<iostream>
using namespace std;
int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    bool isSorted = true;
    for(int i = 0; i< n-1 ; i++){
        if(arr[i] > arr[i+1]){
            isSorted = false;
            break;
        }
    }
    if(isSorted){
        cout << "Sorted";
    }
    else{
        cout << "Not Sorted";
    }
}