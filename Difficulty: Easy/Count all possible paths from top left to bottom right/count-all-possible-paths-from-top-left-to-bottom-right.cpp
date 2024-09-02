//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    //recursive solution
    vector<vector<long long int>>dp;
    const int mod=1e9+7;
    long long int solve(long long int  i,long long int  j,int m,int n){
        
        if(i>=m or j>=n) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        
        if(i==m-1 and j==n-1) return 1;
        else dp[i][j]= (solve(i,j+1,m,n)+solve(i+1,j,m,n))%mod;
        
        return dp[i][j];
        
    }
    long long int numberOfPaths(int m, int n){
        // code here
        dp=vector<vector<long long int>>(m+1,vector<long long int>(n+1,-1));
        
        return solve(0,0,m,n);
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> m >> n;
        Solution ob;
        cout<<ob.numberOfPaths(m,n)<<endl;
    }
    return 0;
}

// } Driver Code Ends