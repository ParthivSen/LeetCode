class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;
        map<int,int> ans;
        int n = nums.size();
        for(int i=0; i<n; i++){
            count +=  ans[nums[i]];
            ans[nums[i]]++;
        }
        return count;
    }
};