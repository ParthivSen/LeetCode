class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> temp;
        
        for(char m: magazine){
            temp[m]++;
        }
        
        for(char r: ransomNote){
            if(!temp[r]){
                return false;
            }
            temp[r]--;
        }
        return true;
    }
};