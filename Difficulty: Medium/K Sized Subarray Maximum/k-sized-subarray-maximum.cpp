//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to find maximum of each subarray of size k.
    
    int findMax(int st,int end,vector<int>&arr){
        
        int maxi=0;
        
        while(st<=end){
            
            maxi=max(maxi,arr[st]);
            st++;
        }
        return maxi;
        
    }
    vector<int> max_of_subarrays(int k, vector<int> &arr) {
        // your code here
        
         
        vector<int>ans;
        
        int maxi = findMax(0,k-1,arr);
        ans.push_back(maxi);
       
        for(int i=1;i<=arr.size()-k;i++){
            
            if(maxi==arr[i-1]){
                maxi=findMax(i,i+k-1,arr);
            }
            else{
                maxi=max(maxi,arr[i+k-1]);
            }
            ans.push_back(maxi);
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

        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        vector<int> res = obj.max_of_subarrays(k, arr);
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends