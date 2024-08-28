//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  static bool cmp(pair<int,int>&a,pair<int,int>&b){
        if(a.first==b.first) return a.second<b.second;
        else {
            return a.first>b.first;
        }
    }
    // Complete this function
    // Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(vector<int>& arr) {
        // Your code here
        int n=arr.size();
        vector<pair<int,int>>v;
        vector<int>ans;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        
        for(auto it:mp){
            v.push_back({it.second,it.first});
        }

        sort(v.begin(),v.end(),cmp);
        for(int i=0;i<v.size();i++){
            int val=v[i].first;
            while(val--){
                ans.push_back(v[i].second);
            }
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

        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution obj;
        vector<int> v;
        v = obj.sortByFreq(arr);
        for (int i : v)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends