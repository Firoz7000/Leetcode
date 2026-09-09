#include<iostream>
using namespace std;
int main(){
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int rows = sizeof(arr) / sizeof(arr[0]);
    int coloumns = sizeof(arr[0]) / sizeof(arr[0][0]);
    int total = rows * coloumns;

    cout << "rows: " << rows << endl;
    cout << "coloumns: " << coloumns << endl;
    cout << "total elements: " << total << endl;
}