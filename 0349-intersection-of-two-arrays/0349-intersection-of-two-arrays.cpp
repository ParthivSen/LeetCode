class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        map<int,int> m;
        map<int,int> res;
        
        for(int i=0; i<nums1.size(); i++){
            m[nums1[i]]++;
        }
        for(int i=0; i<nums2.size(); i++){
            if(m.find(nums2[i]) != m.end()){
                res[nums2[i]]++;
            }
        }
        for(auto i:res){
            ans.push_back(i.first);
        }
        return ans;
    }
};