//How do you copy the contents of one 2D array to another?
#include<iostream>
using namespace std;
int main(){
    int source[3][4] = {
        {1,2,3,4},
        {2,3,4,5},
        {3,4,5,6}
    };
    int destination[3][4];

    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            destination[i][j] = source[i][j];
        }
    }
    for(int i = 0; i<3; i++){
        for(int j =0; j<4; j++){
            cout<< destination[i][j]<< " ";
        }
        cout<<endl;
    }
}