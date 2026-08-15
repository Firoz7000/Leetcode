#include<iostream>
using namespace std;
int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int target = 30;
    int index = 0;
    for(int i = 0; i<n; i++){
        if(arr[i] == target){
            index = i;
            break;
        }
    }
    cout << index;
}