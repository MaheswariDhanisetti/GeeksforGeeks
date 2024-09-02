//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    
    //Function to count the number of ways in which frog can reach the top.
    vector<long long>memo;
    const int mod=1e9+7;
    long long compute(int n){
        if(n>=0 and memo[n]!=-1) return memo[n];
        if(n==0) return 1;
        else if(n<0) return 0;
        else memo[n] = (compute(n-1)+compute(n-2)+compute(n-3))%mod;
        return memo[n];
    }
    long long countWays(int n)
    {
        
        // your code here
        memo=vector<long long>(n+1,-1);
        long long res=compute(n);
        return res;
        
    }
};


//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}

// } Driver Code Ends