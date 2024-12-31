//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        // Your code here
        
        sort(arr.begin(), arr.end());
        
        int ans = 0;
        
        int curr = 1;
        
        // for(int i=0;i<arr.size();i++){
        //     cout<<arr[i]<<" ";
        // }
        
        for(int i=1;i<arr.size();i++){
            
            if(arr[i]==arr[i-1] or arr[i]==arr[i-1]+1){
                if(arr[i]==arr[i-1]+1) curr++;
            }
            else{
                curr = 1;
            }
            ans = max(ans , curr);
            
        }
        
        return ans ; 
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.longestConsecutive(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends