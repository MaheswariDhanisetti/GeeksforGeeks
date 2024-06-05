//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string binaryNextNumber(string s) {
        // code here.
       
       
        for(int i=0;i<s.size();){
            if(s[i]=='0') s.erase(i,1);
            else break;
        }
        if(s=="1") return "10";
        if(s=="0") return "1"; 
        if(s.size()==0) return "1";
        
        int n=s.size();
        if(s[n-1]=='0' && s[n-2]=='0'){
            s[n-1]='1';
            s[n-2]='0';
        }
        else if(s[n-1]=='1' && s[n-2]=='0'){
            s[n-1]='0';
            s[n-2]='1';
        }
        else if(s[n-1]=='0' && s[n-2]=='1'){
            s[n-1]='1';
            s[n-2]='1';
        }
        else if(s[n-1]=='1' && s[n-2]=='1'){
            
            int i=n-1,flag=0;
            for(i=n-1;i>=0;i--){
                if(s[i]=='1'){
                    s[i]='0';
                }
                else{
                    s[i]='1';
                    flag=1;
                    break;
                    
                }
            }
            
            if(flag==0){
                s='1'+s;
            }
            
        }
        
        for(int i=0;i<s.size();){
            if(s[i]=='0') s.erase(i,1);
            else break;
        }
        
        
        return s;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.binaryNextNumber(s);
        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends