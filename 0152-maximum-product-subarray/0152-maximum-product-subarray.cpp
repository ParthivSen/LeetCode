class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prefix = 1;
        int postfix = 1;
        int maximum = INT_MIN;
        int n = nums.size();
        
        for(int i=0; i<n; i++){
            prefix *= nums[i];
            postfix *= nums[n-i-1];
            
            maximum = max(maximum, max(prefix, postfix));
            
            if(prefix == 0) prefix = 1;
            if(postfix == 0) postfix = 1;
        }
        return maximum;
    }
};