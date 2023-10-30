class Solution {
public:
    void findComb(int i, vector<int>&arr, vector<vector<int>> &ans, int target, vector<int> &ds){
        if(i == arr.size()){
            if(target == 0){
                ans.push_back(ds);
            }
            return;
        }
        if(arr[i] <= target){
            ds.push_back(arr[i]);
            findComb(i, arr, ans, target-arr[i], ds);
            ds.pop_back();
        }
        findComb(i+1, arr, ans, target, ds);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        findComb(0, candidates, ans, target, ds);
        return ans;
    }
};