//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int setBit(int N) {
        // Write Your Code here
        for(int i = 0; i <= 31; i++){
            if((N & (1 << i)) == 0){
                N = (N | (1 << i));
                return N;
            }
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        int ans = ob.setBit(N);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends