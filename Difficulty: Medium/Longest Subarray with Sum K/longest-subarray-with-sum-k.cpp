//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestSubarray(vector<int>& A, int K) {
        // code here
        int N = A.size();
        int pre=0;
        unordered_map<int,int>mp;
        int ans=0;
        
        for(int i=0;i<N;++i){
            pre+=A[i];
            if(pre==K) ans=i+1;
            if(mp.find(pre-K)!=mp.end()){
                ans=max(ans,i-mp[pre-K]);
            }
            if(mp.find(pre)==mp.end()) mp[pre]=i;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); // Ignore newline character after k input

        Solution solution;
        cout << solution.longestSubarray(arr, k) << "\n";
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends