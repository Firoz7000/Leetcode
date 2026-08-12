#include<iostream>
using namespace std;
int main(){
    int arr[] = {2, 5, 3, 5, 8, 5, 1};
    int n = 7;
    int target = 5;

    int firstindex = -1;
    int lastindex = -1;
    for(int i = 0; i<n; i++){
        if (arr[i] == target){
            if(firstindex == -1){
                firstindex = i;
            }
            lastindex = i;
        }
    }
    cout << "First : " << firstindex << endl;
    cout << "Last : " << lastindex << endl;
}