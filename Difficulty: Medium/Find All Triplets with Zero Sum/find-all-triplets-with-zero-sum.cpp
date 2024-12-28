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
        
        unordered_map<int, vector<pair<int,int>>>sumPairs;
        
        
        for(int i=0;i<arr.size()-1;i++){
            
            for(int j=i+1;j<arr.size();j++){
                
                int sum = arr[i]+arr[j];
                sumPairs[sum].push_back({i,j});
                
            }
        }
        
        for(int i=0;i<arr.size();i++){
            
            int tar = -arr[i];
            
            if(sumPairs.find(tar)!=sumPairs.end()){
                
                vector<pair<int,int>>vec = sumPairs[tar];
                
                for(int j=0;j<vec.size();j++){
                    
                    if(vec[j].first!=i and vec[j].second!=i){
                        vector<int>tmp = {i,vec[j].first , vec[j].second};
                        sort(tmp.begin() , tmp.end());
                        st.insert(tmp);
                    }
                    
                }
                   
            }
            
        }
        
        vector<vector<int>>ans(st.begin(),st.end());
        
        return ans;
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