//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:

    int solve(int n,int flag){
        
        if(n==0) return n/flag;
        int res=0;
        res=max(n/2,solve(n/2,2))+max(n/3,solve(n/3,3))+max(n/4,solve(n/4,4));
        return res;
    }
    int maxSum(int n)
    {
        //code here.
        return max(n,solve(n,1));
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.maxSum(n)<<"\n";
    }
    return 0;
}
// } Driver Code Ends