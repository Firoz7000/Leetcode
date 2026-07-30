//Check whether the given integer is a multiple of 5 and 7
#include<iostream>
using namespace std;
int main(){
    int nums;
    cin >> nums;
    if(nums % 5 == 0 && nums % 7 == 0){
        cout<<"Multiple of 5 and 7  "<< endl;
    }
    else{
        cout << "Not a Multiple of 5 and 7 " << endl;
    }
}