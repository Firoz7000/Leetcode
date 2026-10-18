class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
    int n = arr.size();
        for(int i = 0; i<n; i++){
            int greater = -1;
            for(int j = i +1; j<n; j++){
                if(arr[j] > greater){
                    greater = arr[j];
                }
            }
            arr[i] = greater;
        }
        return arr;
    }
};