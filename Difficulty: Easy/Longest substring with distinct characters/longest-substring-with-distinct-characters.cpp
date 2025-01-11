//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
        
        unordered_map<char , int >mp;
        
        int st = 0;
        
        int ans = 0;
        
        mp[s[0]]++;
        for(int i=1;i<s.size();i++){
            
            while(st<i and mp[s[i]]>0){
                mp[s[st]]--;
                st++;
            }
            mp[s[i]]++;
            ans = max(ans , i-st+1);
        }
        
        return ans ;
        
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        Solution obj;
        string s;
        cin >> s;
        cout << obj.longestUniqueSubstr(s) << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends