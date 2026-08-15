#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    int sum = 0;
    for(int i = 0; i<n; i++){
        if(i % 2 == 0){
            sum = sum + arr[i];
        }
    }
    cout << "Sum of even element : "<< sum;
}