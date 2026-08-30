#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, 1, 2, 3, 4, 5, 5};
    int n = 7;
    int index = 0;
    for(int i=1; i< n; i++){
        if(arr[i] != arr[index]){
            index++;
            arr[index] = arr[i];
        }
    }
    int newSize = index+1;
    cout << newSize ;
}