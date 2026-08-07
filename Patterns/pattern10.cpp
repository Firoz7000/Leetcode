#include <iostream>
using namespace std;
int main(){
    // Top half (grows 1 to n)
for (int i = 1; i <= n; i++) {
    for (int k = 1; k <= i; k++) cout << "* ";
    cout << endl;
}

// Bottom half (shrinks n-1 down to 1)
for (int i = n - 1; i >= 1; i--) {
    for (int k = 1; k <= i; k++) cout << "* ";
    cout << endl;
}
}