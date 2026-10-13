#include<iostream>
using namespace std;
int main(){
    int arr[] = {20, 30, 20, 30, 40, 50, 10, 10, 50, 25, 15, 15, 25};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = arr[0];
    for(int i = 1; i<n; i++){
        ans = ans ^ arr[i];
    }
    cout << ans;

}