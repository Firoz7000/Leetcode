//747
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxVal = -1;
        int maxIndex = -1;
        int secondMax = -1;
        
        for(int i = 0 ; i<nums.size(); i++){
            if(nums[i] > maxVal){
                secondMax = maxVal;
                maxVal = nums[i];
                maxIndex = i;
            }
            else if (nums[i] > secondMax){
                secondMax = nums[i];
            }
        }
        if(maxVal >= secondMax*2){
                    return maxIndex;
                }
                else{
                    return -1;
                }
    }
};