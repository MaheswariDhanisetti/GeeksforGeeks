//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int minimizeCost(int k, vector<int>& arr) {
        // Code here
        
        /*state :- dp[i] minimum cost to reach ith stone from previous k stones
        base case :- dp[0] = 0
        transition :- dp[i] = min( dp[j]+abs(height[i]-highet[j])); where j was the k previous indexes 
        final answer :- dp[n] min cost to reach the nth stone
        */
        
        int n = arr.size();
        
        vector<int>dp(n,0);
        
        for(int i=1;i<n;i++){
            
            int mini = INT_MAX;
            
            for(int j = i-1;j>=i-k and j>=0;j--){
                mini = min(mini , dp[j]+abs(arr[i]-arr[j]));
            }
            
            dp[i] = mini;
            
        }
        
        return dp[n-1];
        
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.minimizeCost(k, arr);
        cout << res << endl;
        cout << "~" << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends