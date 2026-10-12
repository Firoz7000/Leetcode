#include<iostream>
using namespace std;
int main(){
    int arr [] = {10 ,20, 30 ,40 ,50, 60, 70, 80, 90, 100};
    int left = 0;
    int right = 9;
    int k = 0;
    int ans = -1;
    while(left <= right){
        int mid = left + (right-left)/2;
        if(arr[mid] == k){
            ans = mid;
            break;
        }
        else if(arr[mid] < k){
            left = mid+1;
        }
        else if(arr[mid] > k){
            right = mid -1;
        }
    }
    cout << ans;

}