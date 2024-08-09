//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int Maximize(vector<int> &arr) {
        // Complete the function
        int m = 1e9 + 7;
        sort(arr.begin(), arr.end());
        
        int ans = 0;
        
        for(int i = 0; i < arr.size(); i++) {
    
            ans = (ans + (arr[i] * 1LL * i) % m) % m;
        }
        
        return ans % m;
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
        //  cin.ignore();
        int n = arr.size();
        Solution ob;
        cout << ob.Maximize(arr) << endl;
    }
}
// } Driver Code Ends