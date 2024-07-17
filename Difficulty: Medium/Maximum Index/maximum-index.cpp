//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // arr[]: input array
    // Function to find the maximum index difference.
    int maxIndexDiff(vector<int>& arr) {
        // Your code here
        int n=arr.size();
        int rigmax[n];
        
        rigmax[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--){
            rigmax[i]=max(rigmax[i+1],arr[i]);
            
        }
        
        int i=0,j=0,ans=INT_MIN;
        
        while(i<n and j<n){
            if(rigmax[j]>=arr[i]){
                ans=max(ans,j-i);
                j++;
            }
            else i++;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;

        // calling maxIndexDiff() function
        cout << ob.maxIndexDiff(nums) << endl;
    }

    return 0;
}
// } Driver Code Ends