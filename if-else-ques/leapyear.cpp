//Find days in a month (input year and month number)
#include<iostream>
using namespace std;
int main(){
    int year, month;
    cin >> year >> month;
    if(month ==1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
        cout << "31 Days"<< endl;
    }
    else if (month == 4 || month == 6|| month == 9 || month ==11 ){
        cout << " 30 Days" << endl;
    }
    else if (month == 2){
        bool isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
        if (isLeap) cout << 29;
        else cout <<  28;
    }
    else {
        cout << "Invalid month";
    }
}