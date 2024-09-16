//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int maxLength(string& s) {
        // code here
        stack<string> st; int res = 0;
        for ( int i = 0; i<s.size(); i++ ){
            if ( s[i] == ')' ){
                int vals = 0;
                while ( st.size() > 0 && st.top() != ")" && st.top() != "(" ){
                    vals += stoi(st.top());
                    st.pop();
                }
                if ( st.size() > 0 && st.top() != ")" ){
                    st.pop();
                    st.push(to_string(vals+2));
                } else {
                    if ( vals > 0 ) st.push(to_string(vals));
                    string temp = "";
                    temp += s[i];
                    st.push(temp);
                }
            } else {
                string temp = "";
                temp += s[i];
                st.push(temp);
            }
        } int val = 0;
        while ( !st.empty() ){
            if ( st.top() == ")" || st.top() == "(" ) val = 0;
            else val += stoi(st.top());
            st.pop();
            res = max(res, val);
        } 
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;

        Solution ob;
        cout << ob.maxLength(S) << "\n";
    }
    return 0;
}
// } Driver Code Ends