//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
    private:
    
    int calc(vector<vector<int>>&matrix,int i,int j){
        int val=0;
        if(j-1>=0) val+=matrix[i][j-1];
        if(j+1<matrix[i].size()) val+=matrix[i][j+1];
        if(i-1>=0) val+=matrix[i-1][j];
        if(i+1<matrix.size()) val+=matrix[i+1][j];
        return val;
    }
  public:
    int findCoverage(vector<vector<int>>& matrix) {
        // Code here
        int ans=0;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==0){
                    ans+=calc(matrix,i,j);
                }
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> matrix[i][j];
        Solution obj;
        int ans = obj.findCoverage(matrix);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends