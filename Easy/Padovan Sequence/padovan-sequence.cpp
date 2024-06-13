//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
    const int m=1e9+7;
    // private:
    // int solve(int n){
    //     if(n==0 || n==1 || n==2) return 1;
    //     return (solve(n-2)%m+solve(n-3)%m)%m;
        
    // }
  public:
    int padovanSequence(int n) {
        // code here.
        if(n==0 || n==1 || n==2) return 1;
        vector<int>v(3,1);
        for(int i=3;i<=n;i++){
            v.push_back((v[i-2]+v[i-3])%m);
        }
        return v[n]%m;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.padovanSequence(n) << endl;
    }
    return 0;
}
// } Driver Code Ends