//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    void setMatrixZeroes(vector<vector<int>> &mat) {
        // code here
        
        int row1 = 0,col1=0;
        
        for(int i=0;i<mat[0].size();i++){
            if(mat[0][i]==0){
                row1=1;
                break;
            }
        }
        
        for(int i=0;i<mat.size();i++){
            if(mat[i][0]==0){
                col1=1;
                break;
            }    
        }
        
        for(int i=1;i<mat.size();i++){
            int row=-1 , col=-1;
            for(int j=1;j<mat[i].size();j++){
                
                if(mat[i][j]==0){
                    //for column flag
                    mat[0][j]=0;
                    
                    //for row flag
                    mat[i][0]=0;
                }    
   
            }
        }
        
        
        for(int i=1;i<mat.size();i++){
            
            for(int j=1;j<mat[0].size();j++){
                
                if(mat[i][0]==0 or mat[0][j]==0){
                    mat[i][j]=0;
                }
                
            }
            
        }
        
        if(row1){
            for(int i=0;i<mat[0].size();i++){
                mat[0][i]=0;
            }
        }
        
        if(col1){
            for(int i=0;i<mat.size();i++){
                mat[i][0]=0;
            }
        }
           
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int> > arr(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }
        Solution ob;
        ob.setMatrixZeroes(arr);
        for (auto x : arr) {
            for (auto y : x)
                cout << y << " ";
            cout << endl;
        }

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends