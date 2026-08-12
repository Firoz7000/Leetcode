#include<iostream>
using namespace std;
int main(){
    int arr[] = {2, 5, 3, 5, 8, 5, 1};
    int n = 7;
    int target =5;

    int count  = 0;
    for(int i =0 ; i< n; i++){
        if(arr[i] == target){
            count = count +1;
        }
    }
    cout << "Frequncy : " << count ; 
}