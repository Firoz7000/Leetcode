#include<iostream>
using namespace std;
int main(){
    string str = "programming";
    string ans = "";

    for(int i = 0; i<str.length(); i++){
        bool found = false;
        for(int j = 0; j<ans.length(); j++){

            if(str[i] == ans[j]){
                found = true;
                break;
            }
        }
        if(!found){
            ans += str[i];
        }
    }
    cout << ans;
}