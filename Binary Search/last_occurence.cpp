#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,2,2,5};
    int n = 5;
    int target = 2;
    int ans = -1;

    int low = 0;
    int high = n -1;

    while(low<=high){
        int mid = low + (high - low) /2;
        if(arr[mid] == target){
            ans = mid;
            low = mid + 1;
        } else if (arr[mid] < target){
            low = mid +1;
        }
        else{
            high = mid -1;
        }
    }
    cout << "Low  Occurence : " << ans;
    return 0;
}