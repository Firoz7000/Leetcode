#include<iostream>
#include<sstream>
#include<vector>
using namespace std;

int main(){
    string s = "the sky is blue";

    vector<string> words;
    stringstream ss(s);
    string word;

    while(ss >> word){
        words.push_back(word);
    }

    string result = "";
    for(int i = s.size() -1; i>=0; i--){
        result = result + words[i];
        if(i != 0){
            result = result + " ";
        }
    }
    cout << result;
}
