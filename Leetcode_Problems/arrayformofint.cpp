//LeetCode 989 — Add to Array-Form of Integer
class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        cpp_int number = 0;
        for(int i = 0; i< num.size() ; i++){
            number = number *10 + num[i];
        }
        
        number = number + k;
        
        vector<int> result;
        if(number == 0){
            result.push_back(0);
        }
        
        while(number != 0){
            int digit = number % 10;
            result.push_back(digit);
            number = number / 10;
        }
        reverse(result.begin() , result.end());
        return result;
    }
};
