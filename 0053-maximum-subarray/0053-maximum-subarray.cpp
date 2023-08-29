class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maximum = INT_MIN;
        int current = 0;
        for(int i : nums){
            current += i;
            if(maximum < current){
                maximum = current;
            }
            if(current < 0){
                current = 0;
            }
        }
        return maximum;
    }
};