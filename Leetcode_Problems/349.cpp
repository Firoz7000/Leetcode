class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums2.begin(), nums2.end());
        
        vector<int> ans;
        
        for(int i = 0; i< nums1.size(); i++){
            int target = nums1[i];
            
            int left = 0;
            int right = nums2.size() - 1;
            bool found = false;
            
            while(left <= right){
                int mid = left + (right - left) /2;
                
                if(nums2[mid] == target){
                    found = true;
                    break;
                }
                else if (nums2[mid] < target){
                    left = mid +1;
                }
                else{
                    right = mid -1;
                }
            } 
            if(found) {
                bool duplicate = false;
                
                for(int j = 0; j<ans.size(); j++){
                    if(ans[j] == target){
                        duplicate = true;
                        break;
                    }
                }
                if(!duplicate){
                    ans.push_back(target);
                }
            }
        }
        return ans;
    }
};