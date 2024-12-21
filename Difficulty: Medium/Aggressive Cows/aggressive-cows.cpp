//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    bool Poss(int mid , vector<int>&stalls , int k){
        
        int cows = 1;
        int prev = 0;
        for(int i=1;i<stalls.size();i++){
            if(stalls[i]-stalls[prev]>=mid){
                cows++;
                prev = i;
            }
        }
        // cout<<cows<<" ";
        return cows>=k;
        
    }
    
    int aggressiveCows(vector<int> &stalls, int k) {

        // Write your code here
        sort(stalls.begin() , stalls.end());
        int n = stalls.size();
        
        int low = 0 , high = stalls[n-1]-stalls[0];
        
        int dist = 0;
        // cout<<high<<" ";
        while(low<=high){
            
            int mid = (low+high)/2;
            
            if(Poss(mid, stalls,k)){
                dist = mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
            
        }
        
        return dist;
    }
};

//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int k;
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string in;
        getline(cin, in);
        stringstream sss(in);
        int num;
        while (sss >> num) {
            k = num;
        }
        Solution ob;
        int ans = ob.aggressiveCows(arr, k);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends