//Company hiring decision
#include<iostream>
using namespace std;
int main(){
    bool married;
    cin>> married;
    char gender;
    cin >> gender;
    int age ;
    cin >> age;
    if(married == true){
        cout << "You are hired" << endl;
    }
    else if (married == false && gender == 'M' && age > 30){
        cout << "You are hired" << endl;
    }
    else if(married == false && gender == 'F' && age > 25){
        cout << "You are hired" << endl;
    }
    else{
        cout << "Not hired" << endl; 
    }
}