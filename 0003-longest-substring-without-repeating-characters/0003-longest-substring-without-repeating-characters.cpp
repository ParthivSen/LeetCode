class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char , int> m;
        int i  = 0 , j  =0 ;
        int ans = 0 ;
        while(j<s.length())
        {   
            m[s[j]]++;
            if(m[s[j]] > 1)
            {
                while(m[s[j]] !=  1)
                {
                    m[s[i]]--;
                    i++;
                }
            }
            ans = max(ans , j-i+1);
            j++;
        }
        return ans;
    }
};