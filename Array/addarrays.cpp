//How do you concatenate two arrays in C++
#include<iostream>
using namespace std;
int main(){
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    int n1 = 3, n2 = 3; 

    int result [n1 + n2];
    int index = 0;
    for(int i = 0; i<n1; i++){
        result[index] = arr1[i];
        index++;
    }
    for(int i =0; i<n2; i++){
        result[index] = arr2[i];
        index++;
    }
    for(int i = 0; i<n1+n2; i++){
        cout << result[i] << " ";
    }
}