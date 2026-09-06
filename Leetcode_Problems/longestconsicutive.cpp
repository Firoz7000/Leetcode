class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        int longest = 0;
        
        for(int num : numSet){
            if(numSet.find(num - 1)== numSet.end()){
                int length = 1;
                int current = num;
                
                while(numSet.find(current + 1) != numSet.end()){
                    current++;
                    length++;
                }
                longest = max(longest, length);
            }
        }
        return longest;
    }
};
