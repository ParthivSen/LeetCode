class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int n = nums.size();
        int res = -1, mx = 0;
        
        map<int,int> hash;
        
        for(int i=0; i<n; i++){
            hash[nums[i]]++;
        }
        
        for(auto p: hash){
            if(p.first%2 == 0 && p.second > mx){
                mx = p.second;
                res = p.first;
            }
        }
        return res;
    }
};