// Check whether three numbers are all equal
#include <iostream>
using namespace std;
int main(){
    int number1, number2, number3;
    cin >> number1 >> number2 >> number3;
    if(number1 == number2 && number2 == number3){
        cout << "All are equal" << endl;
    }
    else{
        cout << "Not equal " << endl;
    }
}