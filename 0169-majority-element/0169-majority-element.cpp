class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int lim = n/2;
        int res = 0;
        
        map<int,int> hash;
        
        for(int i=0; i<n; i++){
            hash[nums[i]]++;
        }
        for(auto p: hash){
            if(p.second > lim)
                res = p.first;
        }
        return res;
    }
};