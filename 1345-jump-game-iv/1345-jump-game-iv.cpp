class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,vector<int>> valIndex;
        for(int i=0; i<n; i++){
            valIndex[arr[i]].push_back(i);
        }
        vector<bool> visited(n);
        visited[0] = true;
        queue<int> q;
        q.push(0);
        int step = 0;
        while(!q.empty()){
            for(int size = q.size(); size>0; size--){
                int i = q.front();
                q.pop();
                if(i == n-1)
                    return step;
                vector<int> &next = valIndex[arr[i]];
                next.push_back(i-1);
                next.push_back(i+1);
                for(int j:next){
                    if(j>=0 && j<n && !visited[j]){
                        visited[j] = true;
                        q.push(j);
                    }
                }
                valIndex[arr[i]].clear();
            }
            step++;
        }
        return 0;
    }
};