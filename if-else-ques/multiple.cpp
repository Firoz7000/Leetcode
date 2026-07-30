//Check whether a given integer is a multiple of 5
#include<iostream>
using namespace std;
int main(){
    int nums;
    cin >> nums;
    if(nums % 5 == 0){
        cout<<"Multiple of 5 "<< endl;
    }
    else{
        cout << "Not a Multiple" << endl;
    }
}