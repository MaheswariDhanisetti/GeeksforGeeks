//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
     int safePos(int n, int k) {
        // code here
        if(n==1)
            return 1;
        int m = safePos(n-1,k);
        // shift by k
        if((m+k)%n==0) // this condition to avoid result to be 0
            return n;  // because it should always be from 1 to n
        return (m+k)%n;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        
        cin>>n>>k;

        Solution ob;
        cout << ob.safePos(n,k) << endl;
    }
    return 0;
}
// } Driver Code Ends