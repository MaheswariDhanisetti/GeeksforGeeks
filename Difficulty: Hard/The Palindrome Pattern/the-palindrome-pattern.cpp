//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    // Function to find the symmetric pattern in the given matrix
    string pattern(vector<vector<int>> &arr) {
        int n = arr.size(); // Get the size of the matrix (n x n)
        
        // Check row symmetry
        for(int i = 0; i < n; i++){
            if(checkRowSymmetry(arr, i, n)){ // Call helper function to check row symmetry
                return to_string(i) + " R"; // Return index and type ("R" for Row)
            }
        }
        
        // Check column symmetry
        for(int i = 0; i < n; i++){
            if(checkColumnSymmetry(arr, i, n)){ // Call helper function to check column symmetry
                return to_string(i) + " C"; // Return index and type ("C" for Column)
            }
        }
        
        return "-1"; // Return -1 if no symmetric pattern is found
    }
    
private:
    // Helper function to check row symmetry
    bool checkRowSymmetry(vector<vector<int>> &arr, int row, int n) {
        for(int j = 0; j < n/2; j++){
            if(arr[row][j] != arr[row][n-j-1]){ // Compare elements from both ends towards the center
                return false; // If any pair does not match, return false
            }
        }
        return true; // If all pairs match, return true (row is symmetric)
    }
    
    // Helper function to check column symmetry
    bool checkColumnSymmetry(vector<vector<int>> &arr, int col, int n) {
        for(int j = 0; j < n/2; j++){
            if(arr[j][col] != arr[n-j-1][col]){ // Compare elements from both ends towards the center
                return false; // If any pair does not match, return false
            }
        }
        return true; // If all pairs match, return true (column is symmetric)
    }
};


//{ Driver Code Starts.

int main() {

    int t, n, i, j, flag, k;
    cin >> t;

    while (t--) {
        cin >> n;
        vector<vector<int>> a(n, vector<int>(n));

        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++)
                cin >> a[i][j];
        }
        Solution ob;
        cout << ob.pattern(a) << endl;
    }
    return 0;
}
// } Driver Code Ends