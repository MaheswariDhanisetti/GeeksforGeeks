//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:

    string longestCommonPrefix(vector<string> arr) {
        // your code here
        sort(arr.begin(),arr.end());
        
        sort(arr.begin(),arr.end());
        string ans="";
        for(int i=0;i<arr[0].length();i++){
            char ch=arr[0][i];
            bool f=1;
            for(int j=0;j<arr.size();j++){
                if(arr[j][i]!=ch){
                    f=0;
                    break;
                }
            }
            if(f) ans+=ch;
            else break;
        }
        if(ans.length()) return ans;
        return "-1";
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.longestCommonPrefix(arr) << endl;
    }
}

// } Driver Code Ends