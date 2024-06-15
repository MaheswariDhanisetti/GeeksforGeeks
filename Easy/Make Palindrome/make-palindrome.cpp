//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    bool makePalindrome(int n,vector<string> &arr){
        // Code here
         int cn = 0;
        string str = "";
        map<string, int> mpp;

        for (int i = 0; i < n; i++) mpp[arr[i]]++;

        for (auto x : mpp) {
            string tmp = x.first;
            
            reverse(tmp.begin(),tmp.end());

            if (x.first == tmp) {
                if (mpp[x.first] % 2) {
                    cn++;
                    str = x.first;
                }
            } else {
                if (mpp[x.first] != mpp[tmp]) {
                    cn++;
                    str = x.first;
                }
            }
        }

        if (cn > 1) return false;
        
        int len = str.length();

        for (int i = 0; i < len / 2; i++) {
            if (str[i] != str[len - 1 - i]) {
                return false;
            }
        }
        
        return true;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        if(ob.makePalindrome(n,arr)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
// } Driver Code Ends