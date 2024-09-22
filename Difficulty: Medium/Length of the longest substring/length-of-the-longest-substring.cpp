//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int longestUniqueSubsttr(string s){
        //code
        
        int len = 0;
        int first = 0;
        int second = 0;
        
        int n=s.size();
        vector<bool>v(256,0);
        
        while(first < n){
            
            //repeating character found
            while(v[s[first]]){
                
                v[s[second]] = 0;
                second++;
            }
            v[s[first]] = 1;
            len = max(len,first-second+1);
            first++;
        }
        return len;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		Solution ob;
		cout<<ob.longestUniqueSubsttr(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends