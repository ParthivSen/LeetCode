class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        vector<int> numcopy(nums.size());
        for(int i=0; i<nums.size(); i++){
            numcopy[i] = nums[i];
        }
        for(int i=0; i<nums.size(); i++){
            nums[(i+k)%nums.size()] = numcopy[i];
        }
    }
};