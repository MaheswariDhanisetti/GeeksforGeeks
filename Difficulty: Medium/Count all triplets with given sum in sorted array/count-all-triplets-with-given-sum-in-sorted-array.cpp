//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
public:
    int countTriplets(vector<int>& arr, int target) {
        int n = arr.size();          // Size of the array
        int ans = 0;                 // Variable to store the count of triplets

        // Step 1: Build the frequency map
        map<int, int> mp;
        for (int x : arr) mp[x]++;   // Count the occurrences of each element

        // Step 2: Iterate through the array to fix the first element
        for (int i = 0; i < n; ++i) {
            int req = target - arr[i]; // Required sum for the rest of the triplet
            mp[arr[i]]--;              // Decrement the frequency of the current element
            if (mp[arr[i]] == 0) mp.erase(arr[i]); // Remove if its frequency is 0

            // Step 3: Iterate again to fix the second element
            for (int j = 0; j < i; ++j) {
                int temp = req - arr[j]; // Find the required third element
                if (mp.find(temp) != mp.end()) { // Check if the third element exists
                    ans += mp[temp]; // Add its count to the result
                }
            }
        }

        return ans; // Return the total count of triplets
    }
};


//{ Driver Code Starts.

vector<int> lineArray() {
    string line;
    getline(cin, line);
    stringstream ss(line);
    vector<int> arr;
    int num;
    while (ss >> num) {
        arr.push_back(num);
    }
    return arr;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr = lineArray();
        int target;
        cin >> target;
        cin.ignore();

        Solution ob;
        int res = ob.countTriplets(arr, target);
        cout << res << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends