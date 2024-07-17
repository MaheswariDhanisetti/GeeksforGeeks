//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  private:
    
    bool solve(int s, int d, string &ans,int i){
        
        if(d==1) {
            
            if(s>=0 && s<=9){
                ans+=to_string(s);
                return true;
            }
            
            return false;
        }
        
        
        for(;i<=9;i++){
            
            bool temp=solve(s-i,d-1,ans,0);
            if(temp==true){
                ans=to_string(i)+ans;
                return true;
            }
        }
        
        return false;
        
        
    }
  public:
    string smallestNumber(int s, int d) {
        // code here
        string ans="";
        bool res=solve(s,d,ans,1);
        
        return (res)?ans:"-1";
        
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int s, d;
        cin >> s >> d;
        Solution ob;
        cout << ob.smallestNumber(s, d) << "\n";
    }

    return 0;
}
// } Driver Code Ends