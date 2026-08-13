#include<iostream>
using namespace std;
int main(){
    int arr[] = {12, 45, 3, 67, 21};
    int n = 5;
    int min1 = INT_MAX;
    int min2 = INT_MAX;
    for(int i = 0; i<n; i++){
    if(arr[i] < min1 ){
    min2 = min1;
    min1 = arr[i];
    }
    else if (arr[i]  < min2){
        min2 = arr[i];
    }
  }
  cout << "Second smallest : " << min2 << endl;
}