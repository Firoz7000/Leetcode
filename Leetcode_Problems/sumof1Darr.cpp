//1480
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i = 1; i<nums.size(); i++){
            arr[i] = arr[i] + arr[i-1];
        }
        return arr[];
    }
};