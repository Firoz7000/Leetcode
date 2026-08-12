#include<iostream>
#include<algorithm>
using namespace std;
int main (){
    int arr[5] = {10, 20, 30, 40, 50};
    sort(arr, arr + 5);

    for(int i =0 ; i<5; i++){
        cout << arr[i] << " ";
  }
  return 0;
}
