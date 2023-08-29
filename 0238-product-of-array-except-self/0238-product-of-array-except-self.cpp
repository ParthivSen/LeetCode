class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
//      int product = 1;
//      for(int i=0; i<nums.size(); i++){
//          product *= nums[i];
//      }
//      vector<int> ans;
//      for(int i=0; i<nums.size(); i++){
//          ans.push_back(product/nums[i]);
//      }
//      return ans;
        
        
        int n = nums.size();
        vector<int> ans(n,1);
        
        int prefix = 1;
        for(int i=0; i<n; i++){
            ans[i] = prefix;
            prefix *= nums[i];
        }
        
        int postfix = 1;
        for(int i=n-1; i>=0; i--){
            ans[i] *= postfix;
            postfix *= nums[i];
        }
        
        return ans;
    }
};