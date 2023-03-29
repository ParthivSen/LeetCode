class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
//         int n = str.size();
//         if(n==0)
//             return "";
        
//         string x = str[0], y = str[n-1], ans = "";
//         sort(str.begin(), str.end());
//         if(x == "")
//             return "";
//         for(int i=0; i<n; i++){
//             if(x[i] == y[i]){
//                 ans += x[i];
//             }
//         }
        string res = "";
        for(int i=0; i<str[0].size(); i++){
            for(auto j:str){
                if(i == j.size() || j[i] != str[0][i]){
                    return res;
                }
            }
            res += str[0][i];
        }
        return res;
    }
};