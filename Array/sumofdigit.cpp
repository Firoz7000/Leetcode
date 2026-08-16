#include<iostream>
using namespace std;
int main(){
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 0};
    int n1= 5, n2= 5;
    int sum1 = 0;
    for(int i = 0; i<n1; i++){
        sum1 = sum1 + arr1[i];
    }
    int sum2 = 0;
    for(int j = 0; j<n2; j++){
        sum2 = sum2 + arr2[j];
    }
    int sum = sum1 + sum2;
    cout << "Combined " << sum ; 
}