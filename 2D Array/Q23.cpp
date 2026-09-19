#include<iostream>
using namespace std;
int main(){
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    for(int i = 0; i<3; i++){
        for(int j=i+1; j<3; j++){
            swap(arr[i][j] ,arr[j][i]);
        }
    }
    for(int i = 0; i<3; i++){
        int left = 0; 
        int right = 2;

        while(left<right){
            swap(arr[i][left], arr[i][right]);

            left++;
            right--;
        }
    }
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}