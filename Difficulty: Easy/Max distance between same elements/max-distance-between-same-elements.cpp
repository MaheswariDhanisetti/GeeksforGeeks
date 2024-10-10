//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // your task is to complete this function
    int maxDistance(vector<int>arr)
    {
        
        map<int,vector<int>>mp;
        
        for(int i=0;i<arr.size();i++)
        {
            
            mp[arr[i]].push_back(i);
        }
        int ans=0;
        for(auto &it:mp)
        {
            vector<int>temp=it.second;
            int pre=abs(temp[0]-temp[temp.size()-1]);
            ans=max(ans,pre);
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);

        stringstream s1(input);
        int num;
        while (s1 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        cout << ob.maxDistance(arr) << endl;
    }
    return 0;
}
// } Driver Code Ends