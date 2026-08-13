#include<iostream>
using namespace std;
int main(){
    int arr[] = {12, 45, 3, 67, 21};
    int n = 5;
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    for(int i = 0; i<n; i++){
    if(arr[i] > max1 ){
    max2 = max1;
    max1 = arr[i];
    }
    else if (arr[i] >max2){
        max2 = arr[i];
    }
  }
  cout << "Second Largest : " << max2 << endl;
}