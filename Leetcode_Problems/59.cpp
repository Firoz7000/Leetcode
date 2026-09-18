//Spiral matrix II
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> result (n , vector<int>(n,0));
        int left = 0, right = n-1;
        int top = 0, bottom = n-1;
        int num = 1;
        while (left<=right && top<=bottom){
            for(int j= left; j<= right; j++){
                result[top][j] = num;
                num++;
            }
            top++;
            for(int i = top; i<=bottom; i++){
                result[i][right] = num;
                num++;
            }
            right--;
            
            if(top<=bottom){
                for(int j = right; j>=left; j--){
                    result[bottom][j] = num;
                    num++;
                }
                bottom--;
            }
            if(left<=right){
                for(int i = bottom; i>=top; i--){
                    result[i][left] = num;
                    num++;
                }
                left++;
            }
        }
        return result;
    }
};