#include<iostream>
using namespace std;
int main(){
    int arr[3][4] = {
        {1,2,3,4},
        {2,3,4,5},
        {3,4,5,6}
    };
    int maxVal = arr[0][0];

    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            if(arr[i][j] > maxVal){
                maxVal = arr[i][j];
            }
        }
    }
    cout << "Max: "<< maxVal;
}