class Solution {
public:
    string removeDuplicateLetters(string s) {
        string ans = "";
        
       int count[26] = {0};
    for(char ch : s){
        count[ch - 'a']++;
    }
    for(int i = 0; i<s.length(); i++){
        count[s[i] - 'a']--;
        
        bool found = false;
        
        for(int j = 0; j<ans.length(); j++){
            if(s[i] == ans[j]){
                found = true;
            }
        }
        if(found){
            continue;
        }
        while(!ans.empty() &&
        ans.back() > s[i] && 
        count[ans.back() - 'a']> 0){
            
            ans.pop_back();
        }
        ans+=s[i];
    }
    return ans;
    }
};