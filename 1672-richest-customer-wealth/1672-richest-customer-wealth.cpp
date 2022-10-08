class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum=0;
        for(vector<int> s: accounts){
            int ans=0;
            
            for(int res:s){
                ans += res;
            }
            sum = max(sum,ans);
        }
        return sum;
    }
};