#include<iostream>
using namespace std;

void permutation(string &s, int start,int i){
    if(start == s.length()){
        cout << s << endl;
        return;
    }
    if(i == s.length()) return ;

    swap(s[start], s[i]);
    permutation(s, start+1, start+1);
    swap(s[start], s[i]);
    permutation(s, start, i+1);
}

int main(){
    string s = "abc";
    permutation(s,0,0);
    return 0;
}