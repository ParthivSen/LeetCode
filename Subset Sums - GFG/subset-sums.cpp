//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    void func(int i, int s, vector<int> &ans, vector<int> &arr, int n){
        if(i == n){
            ans.push_back(s);
            return;
        }
        func(i+1, s+arr[i], ans, arr, n);
        
        func(i+1, s, ans, arr, n);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> ans;
        func(0, 0, ans, arr, N);
        sort(ans.begin(), ans.end());
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends