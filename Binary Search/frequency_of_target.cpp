#include<iostream>
using namespace std;
int lasOccurrence(int arr[], int n, int k){
    int left = 0;
    int right = n - 1;
    int ans = -1;

    while(left<=right){
        int mid = left + (right - left)/2;
        if(arr[mid] == k){
            ans = mid;
            left = mid +1;
        }
        else if(arr[mid] > k){
            right = mid -1;
        }
        else{
            left = mid +1;
        }
    }
    return ans;
}
int firstOccurence(int arr[], int n, int k){
    int left = 0;
    int right = n-1;
    int ans = -1;

    while(left <= right){
        int mid = left + (right - left) / 2;
        if(arr[mid] == k){
            ans = mid;
            right = mid -1;
        }
        else if (arr[mid] < k){
            left = mid +1;
        }
        else{
            right = mid -1;
        }
    }
    return ans;
}
int main(){
    int arr[] = {10, 20, 20, 20, 20, 20, 20, 30, 40, 50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 20;
    int fo = firstOccurence(arr, n, k);
    int lo = lasOccurrence(arr, n, k);

    int ans;
    if(fo == -1){
        ans = 0;
    }
    else{
        ans = lo - fo +1;
    }
    cout << ans;
}
