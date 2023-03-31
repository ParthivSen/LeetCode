class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> hash;
        if(s.length() > t.length()){
            return false;
        }
        for(char i: s){
            hash[i]++;
        }
        for(char i:t){
            hash[i]--;
            if(hash[i] < 0)
                return false;
        }
        return true;
    }
};