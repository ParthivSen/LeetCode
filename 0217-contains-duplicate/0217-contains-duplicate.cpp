class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> ans;
        for(int num: nums){
            if(ans.count(num))
                return true;
            ans.insert(num);
        }
        return false;
    }
};