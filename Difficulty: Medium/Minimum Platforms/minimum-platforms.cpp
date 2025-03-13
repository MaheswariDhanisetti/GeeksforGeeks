//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to find the minimum number of platforms required at the
    // railway station such that no train waits.
    int findPlatform(vector<int>& arr, vector<int>& dep) {
        // Your code here
        
        int maxi = *max_element(dep.begin() , dep.end());
        
        
        vector<int>pre(maxi+2 , 0);
        
        for(int i=0;i<arr.size();i++){
            pre[arr[i]]+=1;
            pre[dep[i]+1]-=1;
        }
        
        int ans = pre[0];
        // cout<<pre.size()<<" ";
        for(int i=1;i<pre.size();i++){
            pre[i] = pre[i]+pre[i-1];
            ans = max(ans , pre[i]);
        }
        
        return ans;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr, dep;
        string input;

        // Read first array (arr)
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        // Read second array (dep)
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            dep.push_back(number);
        }

        // Assuming Solution class is defined elsewhere with a method findPlatform
        Solution ob;
        cout << ob.findPlatform(arr, dep);

        cout << endl;
        cout << "~\n";
    }
    return 0;
}

// } Driver Code Ends