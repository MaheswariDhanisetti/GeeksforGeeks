//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	string removeDups(string s) 
	{
	    // Your code goes here
	    int arr[26]={0};
	    string ans;
	    for(int i=0;i<s.size();i++)
	    {
	        int val=s[i]-97;
	       
	        if(arr[val]==0)
	        {
	            ans+=s[i];
	            arr[val]=1;
	        }
	    }
	    return ans;
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
        string s;
        cin >> s;

        Solution ob;
        cout << ob.removeDups(s) << "\n";
    }

    return 0;
}
// } Driver Code Ends