#include<iostream>
using namespace std;
int main(){
    int arr[] = {3, 5, 6};
    int n = 3;
    for(int i = 0; i<n; i++){
        for(int j = 0; j< arr[i]; j++){
            cout << "*";
        }
        cout << endl;
    }
}