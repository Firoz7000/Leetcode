//Rectangle — check whether area or perimeter is greater
#include<iostream>
using namespace std;
int main(){
    int length , breadth ;
    cin >> length >> breadth ;
    int area = length * breadth;
    int parameter = 2 * (length + breadth);
    if ( area > parameter ){
        cout << " Area is greater than parameter" << endl;
    }
    else if (parameter > area){
        cout << "Parameter is greater than area" << endl;
    }
    else{
        cout<<  "both are equal" << endl;
    }
}