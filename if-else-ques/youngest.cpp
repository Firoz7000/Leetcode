//If the ages of Ram, Shyam and Ajay are input through the keyboard, write a program to determine the youngest of the three
#include <iostream> 
using namespace std;
int main(){
    int ram , shyam, ajay;
    cin >> ram >> shyam >> ajay;
    if(ram < shyam && ram < ajay){
        cout << "ram is youngest" << endl;
    }
    else if (shyam < ram && shyam < ajay){
        cout << "shyam is youngest"<< endl;
    }
    else{
        cout << " ajay is youngest" << endl;
    }
}