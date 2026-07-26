class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        int longest = 0;
        for(int nums : numSet){
            if(numSet.find(nums - 1 ) == numSet.end()){
                int length = 1;
                int current  = nums;
                while(numSet.find(current + 1) != numSet.end()){
                    current = current + 1;
                    length++;
                }
                longest = max(longest, length);
            }
        }
        return longest;
    }
};
