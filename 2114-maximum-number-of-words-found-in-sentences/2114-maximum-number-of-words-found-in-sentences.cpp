class Solution {
public:
    int spaceCount(string str){
        int space=0;
        for(auto i: str){
            if(i==' '){
                space++;
            }
        }
        return space;
    }
    int mostWordsFound(vector<string>& sentences) {
        int n = sentences.size();
        int count = 0;
        vector<int> ans;
        for(int i=0; i<n; i++){
            count = spaceCount(sentences[i]);
            ans.push_back(count);
        }
        return *max_element(ans.begin(), ans.end()) + 1;
    }
};