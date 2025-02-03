//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
    int dp[1001];
    
    int solve(int n , vector<int>&price){
        
        if(n<=0) return 0;
        
        if(dp[n]!=-1) return dp[n];
        
        int maxi = 0;
        
        for(int i=1;i<=n;i++){
            maxi = max( maxi  , price[i-1] + solve( n-i , price) );
        }
        
        return dp[n]=maxi;
        
    }
    
    int cutRod(vector<int> &price) {
        // code here
        
        int n = price.size();
        
        memset(dp , -1 ,sizeof(dp));
        
        return solve(n ,price);
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        Solution ob;

        cout << ob.cutRod(a) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends