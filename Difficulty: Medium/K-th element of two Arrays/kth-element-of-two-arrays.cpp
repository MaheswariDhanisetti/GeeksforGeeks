//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int kthElement(int k, vector<int>& arr1, vector<int>& arr2) {
        // code here
        int i = 0, j = 0;
        int curr = -1;

        while (k > 0 && i < arr1.size() && j < arr2.size()) {
            if (arr1[i] <= arr2[j]) {
                curr = arr1[i];
                i++;
            } else {
                curr = arr2[j];
                j++;
            }
            k--;
        }

        // If one array is exhausted, continue with the remaining elements
        while (k > 0 && i < arr1.size()) {
            curr = arr1[i];
            i++;
            k--;
        }

        while (k > 0 && j < arr2.size()) {
            curr = arr2[j];
            j++;
            k--;
        }

        return curr;
    }
};

//{ Driver Code Starts.

// Driver code
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, m, k;
        cin >> k;
        cin.ignore();
        string input;
        int num;
        vector<int> arr1, arr2;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr1.push_back(num);
        }

        getline(cin, input);
        stringstream s3(input);
        while (s3 >> num) {
            arr2.push_back(num);
        }

        Solution ob;
        cout << ob.kthElement(k, arr1, arr2) << endl;
    }
    return 0;
}
// } Driver Code Ends