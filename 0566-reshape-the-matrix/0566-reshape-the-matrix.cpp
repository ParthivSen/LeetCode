class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int m = nums.size();
        int n = nums[0].size();
        
        if(m*n != r*c)
            return nums;
        
        vector<vector<int>> res(r,vector<int>(c));
        
        for(int i=0; i<m*n; i++){
            int row = i/n;
            int col = i%n;
            
            int newRow = i/c;
            int newCol = i%c;
            
            res[newRow][newCol] = nums[row][col];
        }
        return res;
    }
};