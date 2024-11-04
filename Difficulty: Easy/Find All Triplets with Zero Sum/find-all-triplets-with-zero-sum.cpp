//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<vector<int>> findTriplets(vector<int> &arr) {
        // Code here
        
        
        set<vector<int>>st;
        vector<vector<int>>res;
        
    
        for(int i=0;i<arr.size();i++){
            unordered_map<int,vector<int>>mp;
            for(int j=i+1;j<arr.size();j++){
                int diff=-(arr[i]+arr[j]);
                if(mp.find(diff)!=mp.end()){
                    for(int k:mp[diff]){
                        vector<int>t={i,j,k};
                        sort(t.begin(),t.end());
                        st.insert(t);
                    }
                }
                mp[arr[j]].push_back(j);
            }
        }
        for(const auto& it:st)
            res.push_back(it);
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
        Solution ob;

        vector<vector<int>> res = ob.findTriplets(arr);
        sort(res.begin(), res.end());
        if (res.size() == 0) {
            cout << "[]\n";
        }
        for (int i = 0; i < res.size(); i++) {
            for (int j = 0; j < res[i].size(); j++) {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends