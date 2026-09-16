#include<iostream>
using namespace std;
int main(){
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int maxSum = 0;
    int maxRow = 0;
    for(int i = 0; i<3; i++){
        int rowSum = 0;
        for(int j = 0; j<3; j++){
            rowSum = rowSum + arr[i][j];
        }
        if(rowSum > maxSum){
            maxSum = rowSum;
            maxRow = i;
        }
    }
    cout << "Row with largest sum: " << maxRow << " (sum = " << maxSum << ")";
}