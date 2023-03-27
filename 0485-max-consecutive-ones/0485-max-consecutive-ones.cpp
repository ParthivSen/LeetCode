class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int temp = 0;
        int ans = temp;
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != 1){
                temp = 0;
            }else{
                temp++;
            }
            ans = max(ans,temp);
        }
        return ans;
    }
};