//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // code here
        
        int ans=1;
        int cnt=0;
        
        for(int i:nums) {
            
            if(i==0) cnt++;
            else ans*=i;
        }
        
        vector<int>res;
        for(int i=0;i<nums.size();i++){
            
           if(nums[i]==0 and cnt==1){
               res.push_back(ans);
           }
           else if(nums[i]==0 and cnt>1){
               res.push_back(0);
           }
           else if(nums[i]!=0 and cnt>=1){
               res.push_back(0);
           }
           else{
               res.push_back(ans/nums[i]);
           }
            
        }
        
        return res;
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
        stringstream ss(input);
        int number;

        while (ss >> number) {
            arr.push_back(number);
        }

        Solution obj;
        vector<int> res = obj.productExceptSelf(arr);

        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }
        cout << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends