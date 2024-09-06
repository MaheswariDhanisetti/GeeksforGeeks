//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:

    void solve(int n, int temp,vector<int>&res,bool stat){
	
    	//base case
    	if(stat==1 and n>temp) return;
    	
    	if(n<=0 and stat==0){
    		stat=1;
        }
        
        if(stat){
        	res.push_back(n);
        	solve(n+5,temp,res,stat);
        }
        else{
        	res.push_back(n);
        	solve(n-5,temp,res,stat);
        }
        
    }
    
    vector<int> pattern(int n){
        // code here
        vector<int>res;
    	solve(n,n,res,0);
    	return res;

    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.pattern(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends