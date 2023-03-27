class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        vector<bool> ans(n,false);
        for(int i=0; i<n; i++){
            ans[nums[i]] = false;
        }
        for(int i=1; i<n+1; i++){
            if(count(nums.begin(),nums.end(),i) == 0)
                return i;
        }
        return 0;
    }
};