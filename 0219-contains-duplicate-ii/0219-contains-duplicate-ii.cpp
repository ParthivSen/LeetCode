class Solution {
public:
    int containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        map<int,int> ans;
        for(int i=0; i<n; i++){
            if(ans.count(nums[i])){
                if(abs(i-ans[nums[i]])<=k)
                    return true;
            }
            ans[nums[i]] = i;
        }
        return false;
    }
};