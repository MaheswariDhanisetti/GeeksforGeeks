//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	    vector<int>dp;
	    const int mod=1e9+7;
	    int solve(int n){
	        
	        if(n<0) return 0;
	        if(dp[n]!=-1) return dp[n];
	        if(n==0) return 1;
	        
	        dp[n]=(solve(n-1)+solve(n-2))%mod;
	        return dp[n];
	    }
		int nthPoint(int n){
		    // Code here
		    dp=vector<int>(n+1,-1);
		    return solve(n);
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthPoint(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends