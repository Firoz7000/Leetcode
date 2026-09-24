class Solution {
public:
    int countSubstrings(string s) {
        int n = s.size();
        int count = 0;
        for(int i = 0; i<n; i++){
            for(int j = i; j<n; j++){
                bool palindrome = true;
                
                int left = i;
                int right = j;
                
                while(left < right){
                    if(s[left] != s[right]){
                        palindrome = false;
                        break;
                    }
                    left++;
                    right--;
                }
                if(palindrome){
                    count++;
                }
            }
        }
        return count;
    }
};