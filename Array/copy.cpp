#include<iostream>
#include<algorithm>
using namespace std;
int main (){
    int arr[5] = {10, 20, 30, 40, 50};
    int copyArr[5];
    copy(arr, arr + 5, copyArr);

    for(int i =0 ; i<5; i++){
        cout << copyArr[i] << " ";
  }
  return 0;
}
