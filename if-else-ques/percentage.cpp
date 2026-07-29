//Input marks of 5 subjects, calculate percentage, and assign a grade
#include <iostream>
using namespace std;
int main(){
    int marks1 , marks2, marks3, marks4, marks5;
    cin >> marks1 >> marks2 >> marks3 >> marks4 >> marks5;
    int sum = marks1 + marks2 + marks3 + marks4 + marks5;
    float percentage = (sum * 100.0) / 500;
    if(percentage >= 90){
        cout << "A" << endl;
    }
    else if (percentage >= 80){
        cout << "B" << endl;
    }
    else if (percentage >= 70 ){
        cout << "C" << endl;
    }
    else if (percentage >= 60 ){
        cout << "D" << endl;
    }
    else if (percentage >= 40){
        cout << "E" << endl;
    }
    else{
        cout << "F" << endl;
    }
}