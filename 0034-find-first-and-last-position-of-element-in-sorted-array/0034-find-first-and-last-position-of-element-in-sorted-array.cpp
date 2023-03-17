class Solution {
public:
    int FirstOccurence(vector<int>& nums, int target, int low, int high){
        int res = -1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(target == nums[mid]){
                res = mid;
                high = mid-1;
            }else if(target < nums[mid]){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return res;
    }
    int LastOccurence(vector<int>& nums, int target, int low, int high){
        int res = -1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(target == nums[mid]){
                res = mid;
                low = mid+1;
            }else if(target < nums[mid]){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return res;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        vector<int> ans;
        int first = FirstOccurence(nums,target,low,high);
        int last = LastOccurence(nums,target,low,high);
        ans.push_back(first);
        ans.push_back(last);
        return ans;
    }
};