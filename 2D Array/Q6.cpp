#include<iostream>
using namespace std;
int main(){
    int arr[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,0,1,2}
    };
    int sum = 0;
    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            sum = sum + arr[i][j];
        }
    }
    cout << "Sum: " << sum;
}