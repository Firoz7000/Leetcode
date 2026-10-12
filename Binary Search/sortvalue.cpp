#include<iostream>
using namespace std;

int findsmallest(int arr[] , int n){
    if(n == 0){
        return -1;
    }
    else if (n == 1){
        return arr[0];
    }
    else if (arr[0] < arr[n-1]){
        return arr[0];
    }
    else{
        int left = 0;
        int right = n-1;

        while(left <= right){
            int mid = left + (right - left) / 2;

            if(mid != 0 && arr[mid] < arr[mid -1]){
                return arr[mid];
            }
            else if (mid != n-1 && arr[mid] > arr[mid +1]){
                return arr[mid +1];
            }
            else if (arr[left] < arr[mid]){
                left= mid +1;
            }
            else{
            right = mid -1;
            }
        }
        return -1;
    }
}
int main(){
    int arr[] = { 40, 50, 60, 70, 80, 10, 20, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int ans = findsmallest(arr, n);

    cout << ans;
}