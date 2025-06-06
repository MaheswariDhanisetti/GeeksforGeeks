//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minimumMultiplications(vector<int>& arr, int start, int end) {
        // code here
        int mod = 1e5;
        
        unordered_map<int ,int>mp;
        
        queue<pair<int,int>>q;
        
        q.push({start,0});
        
        mp[start%mod]++;
        
        while(!q.empty()){
            
            int val = q.front().first;
            int minstps = q.front().second;
            
            // cout<<val<<" ";
            
            q.pop();
            
            if(val == end) return minstps;
            
            for(int i=0;i<arr.size();i++){
                
                if((val*arr[i])%mod == end ) return minstps+1;
                if( mp[(val*arr[i])%mod] <=0 ){
                    q.push({(val*arr[i])%mod,minstps+1});
                    mp[ (val*arr[i])%mod] ++;
                    
                }
                
            }
            
        }
        
        return -1;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int start, end;
        cin >> start >> end;
        Solution obj;
        cout << obj.minimumMultiplications(arr, start, end) << endl;
    
cout << "~" << "\n";
}
}

// } Driver Code Ends