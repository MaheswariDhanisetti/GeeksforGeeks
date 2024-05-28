//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
    private:
    
     void solve(int n,vector<int>&v){
         
         v.push_back(n);
         if(n>0){
           solve(n-5,v);
           v.push_back(n);
         }
     }
public:
    vector<int> pattern(int n){
        // code here
        vector<int>v;
        solve(n,v);
        return v;
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