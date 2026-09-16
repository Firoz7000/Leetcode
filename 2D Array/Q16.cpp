#include<iostream>
using namespace std;
int main(){
    int arr[3][3] = {
        {1,3,5},
        {7,9,11},
        {13, 15, 17}
    };
    int target = 9;
    bool found = false;
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            if(arr[i][j] == target){
                cout << "Element found at the row "<< i <<" and coloumn "<< j;

                found = true;
                break;
            } 
        }
        if(found)
            break;
        if(!found){
            cout << "Element not found";
        }
    }
}