//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string oddEven(string s) {
        // code here
        map<char,int>mp;
   
        
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        int ans=0;
        int x=0,y=0;
        for(auto it:mp){
            int val=it.first-'0';
            if((val)%2==0 && it.second%2==0 ) x++;
            if(val%2==1 && it.second%2==1) y++;
        }
        
        return ((x+y)%2==0)?"EVEN":"ODD";
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        string s;
        getline(cin, s);

        Solution obj;
        string res = obj.oddEven(s);

        cout << res << "\n";
    }
}

// } Driver Code Ends