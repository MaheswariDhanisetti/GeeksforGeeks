//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// long long int maxSum(int arr[], int n);

// } Driver Code Ends
class Solution {
  public:
    long long maxSum(vector<int>& arr) {
        // code here
        int n=arr.size();
        sort(arr.begin() , arr.end());
        
        vector<int>ans;
        for(int i=0;i<n/2;i++){
            
            ans.push_back(arr[i]);
            ans.push_back(arr[n-i-1]);
        }
        
        if(n%2) ans.push_back(arr[n/2]);
        long long res=0;
        for(int i=0;i<n-1;i++){
            res+= abs(ans[i]-ans[i+1]);
        }
        
        res+=abs(ans[n-1]-ans[0]);
        
        return res;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore any newline character left in the buffer
    while (t--) {
        string line;
        getline(cin, line); // Read the entire line of input
        stringstream ss(line);
        vector<int> arr;
        int num;

        // Parse the input line into integers and add to the vector
        while (ss >> num) {
            arr.push_back(num);
        }

        Solution ob;
        long long ans = ob.maxSum(arr);

        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends