class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i=0; i<haystack.size(); i++){
            int j = i;
            int k = 0;
            while(k < needle.size()){
                if(j >= haystack.size() || (haystack[j] != needle[k])){
                    break;
                }
                j++;
                k++;
            }
            if(k == needle.size()){
                return i;
            }
        }
        return -1;
        
    }
};

