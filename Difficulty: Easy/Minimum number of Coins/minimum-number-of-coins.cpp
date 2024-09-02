//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:

    //recursion solution
        
     void solve(int n, vector<int>& res) {
        if (n == 0) return;
    
        if (n >= 2000) {
           res.push_back(2000);
            solve(n - 2000, res);
        } 
        else if (n >= 500) {
            res.push_back(500);
            solve(n - 500, res);
        } 
        else if (n >= 200) {
            res.push_back(200);
            solve(n - 200, res);
        } 
        else if (n >= 100) {
            res.push_back(100);
            solve(n - 100, res);
        } 
        else if (n >= 50) {
            res.push_back(50);
            solve(n - 50, res);
        } 
        else if (n >= 20) {
            res.push_back(20);
            solve(n - 20, res);
        } 
        else if (n >= 10) {
            res.push_back(10);
            solve(n - 10, res);
        } 
        else if (n >= 5) {
            res.push_back(5);
            solve(n - 5, res);
        } 
        else if (n >= 2) {
            res.push_back(2);
            solve(n - 2, res);
        } 
        else {
            res.push_back(1);
            solve(n - 1, res);
        }
    }
    
    vector<int> minPartition(int N) {
        vector<int> res; // Initialize vector with 10 elements, all set to 0
        solve(N, res);
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
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends