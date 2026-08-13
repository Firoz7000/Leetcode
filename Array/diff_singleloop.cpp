#include<iostream>
using namespace std;
int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int maxVal = arr[0];
    int minVal = arr[0];

    for(int i =0 ; i<n; i++){
        if(arr[i] > maxVal){
            maxVal = arr[i];
        }
        if(arr[i] < minVal){
            minVal = arr[i];
        }
    }
    cout << "Maximum value - " << maxVal  << endl;
    cout << "Minimum Value - " << minVal << endl;
    
}