//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int isValid(string str) {
        // code here
        int dcnt=0;
        int temp=-1;
        int numcnt=0;
        str+='.';
        int cntdig=0;
        
        for(int i=0;i<str.size();i++){
            
            if(str[i]>='0' and str[i]<='9'){
                if(temp==-1) temp=0;
                temp=temp*10+(str[i]-'0');
                cntdig++;
            }
            else if(str[i]=='.'){
                
                dcnt++;
                if(temp!=-1) numcnt++;
                if((temp>255) || (temp<0) || dcnt>4 || dcnt>numcnt) return false;
                if(cntdig!= to_string(temp).size()) return false;
                cntdig=0;
                temp=-1;
        
            }
            else return false;
        }
        
        if(dcnt==4 and numcnt==4) return true;
        return false;
    }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        // if (s.size() == 3) {
        //     cout << "false" << endl;
        //     return 0;
        // }
        Solution ob;
        bool f = ob.isValid(s);
        if (f)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends