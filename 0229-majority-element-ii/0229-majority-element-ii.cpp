class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int lim = n/3;
        vector<int> ans;
        
        map<int,int> hash;
        
        for(int i=0; i<n; i++)
            hash[nums[i]]++;
        
        for(auto p: hash){
            if(p.second > lim)
                ans.emplace_back(p.first);
        }
        return ans;
    }
};