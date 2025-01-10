//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        // code here.
        
        unordered_map<int,int>mp;
        
        for(int i = 0 ;i<k;i++){
            mp[arr[i]]++;
        }
        
        vector<int>res;
        
        res.push_back(mp.size());
        int st = 0;
        for(int i=1;i<=arr.size()-k;i++){
            mp[arr[st]]--;
            if(mp[arr[st]]<=0) mp.erase(arr[st]);
            mp[arr[i+k-1]]++;
            st++;
            
            // for(auto it:mp) cout<<it.first<<" "<<it.second<<" ";
            // cout<<endl;
            res.push_back(mp.size());
        }
        
        return res;
        
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
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution obj;
        vector<int> res = obj.countDistinct(arr, k);
        for (auto it : res)
            cout << it << " ";
        cout << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends