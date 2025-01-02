//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countSubarrays(vector<int> &nums, int k) {
        // code here
        
        vector<int>pre;
        pre.push_back(nums[0]);

        for(int i=1;i<nums.size();i++){
            pre.push_back(pre[i-1]+nums[i]);
        }

        unordered_map<int,int>mp;//to store frequencies
        mp[0]++;
        int ans=0;
        for(int i=0;i<nums.size();i++){

            if(mp.find(pre[i]-k)!=mp.end()){
                ans+=mp[pre[i]-k];
            }

            mp[pre[i]]++;
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

        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        cout << obj.countSubarrays(arr, k);
        cout << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends