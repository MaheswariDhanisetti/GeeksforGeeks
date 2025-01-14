//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) {
        // code here
        
        int n  = arr.size();
        
        vector<long long>pre(n);
        
        pre[0] = arr[0];
        
        for(int i=1;i<n;i++)
        {
            pre[i] = pre[i-1]+arr[i];    
        }
        
        for(int i=0;i<n;i++){
            
            int lf = (i==0)?0:pre[i-1];
            
            int rg = pre[n-1]-pre[i];
            
            if(lf==rg) return i;
            
        }
        
        return -1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To discard any leftover newline characters
    while (t--)   // while testcases exist
    {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.findEquilibrium(arr) << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends