//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& mat) {
        // code here
        
        
        set<int>s;
        unordered_map<int,int>mp;
        
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                
                if(mat[i][j]==1){
                    s.insert(i);
                    mp[j]++;
                }
                
            }
        }
        
        
        for(int i=0;i<mat.size();i++){
            if(s.find(i)==s.end() && mp[i]==mat.size()-1) return i;
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int> > M(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> M[i][j];
            }
        }
        Solution ob;
        cout << ob.celebrity(M) << endl;
    }
}

// } Driver Code Ends