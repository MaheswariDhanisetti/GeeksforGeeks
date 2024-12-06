//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    // Function to find hIndex
    int hIndex(vector<int>& citations) {
        // code here
        
        vector<int>temp=citations;
        int n=temp.size();
        sort(temp.begin(),temp.end());
        
        int ans=0;
        int j=0; //index for traversing in array
        int currval=n; //intial freq value
        
        for(int i=0;i<=temp[n-1];i++){
            
            //if i is still less than the current value in the temp then the same applies to it also
            while(i>temp[j])
            {
                j++;
                currval=n-j;
            }

            if(currval>=i){
                ans=max(ans,i);
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {

    int test_cases;
    cin >> test_cases;
    cin.ignore();
    while (test_cases--) {
        string input;
        vector<int> arr;

        // Read the array from input line
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        // Solution instance to invoke the function
        Solution ob;
        int result = ob.hIndex(arr);

        cout << result << endl;

        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends