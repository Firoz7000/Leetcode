#include<iostream>
using namespace std ;
int main(){
    int hardness ;
    cin >> hardness;
    double carbon ;
    cin >> carbon;
    int tensile ;
    cin >> tensile;
    bool c1 = hardness >50;
    bool c2 = carbon < 0.7;
    bool c3 = tensile > 5600;
    if(c1 && c2 && c3){
        cout << " Grade 10";
    }
    else if (c1 && c2 && !c3){
        cout << "Grade 9";
    }
    else if (!c1 && c2 && c3 ){
        cout << " Grade 8";
    }
    else if (c1 && !c2 && c3){
        cout << "Grade 7";
    }
    else if(c1 || c2 || c3){
        cout << " Grade 6";
    }
    else{
        cout << "Grade 5" ;
    }
}