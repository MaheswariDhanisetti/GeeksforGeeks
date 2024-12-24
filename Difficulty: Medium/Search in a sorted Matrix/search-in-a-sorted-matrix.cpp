//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    // Function to search a given number in row-column sorted matrix.
    bool searchMatrix(vector<vector<int>> &arr, int x) {
        // code here
        
        int n = arr[0].size();
        
        int st=0, end = arr.size()-1;
        
        int row = 0;
        
        while(st<=end){
            
            int mid = (st+end)/2;
            
            if(arr[mid][n-1]>=x and arr[mid][0]<=x ){
                row = mid;
                break;
            }
            else if(arr[mid][n-1]<x){
                st=mid+1;
            }
            else{
                end = mid-1;
            }
            
        }
        
        // if(arr[0][0]>x) return false;
        
        // if(arr[arr.size()-1][n-1])
        for(int i=0;i<n;i++){
            
            if(arr[row][i]==x) return true;
            
        }
        
        return false;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {

        int n, m;
        cin >> n >> m;
        vector<vector<int> > matrix(n);

        for (int i = 0; i < n; i++) {
            matrix[i].assign(m, 0);
            for (int j = 0; j < m; j++) {
                cin >> matrix[i][j];
            }
        }

        int x;
        cin >> x;
        Solution obj;
        if (obj.searchMatrix(matrix, x))
            cout << "true\n";
        else
            cout << "false\n";

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends