//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
    int binary_search ( vector<int>&nums , int target , int dir){

        int low = 0 , high = nums.size()-1;
        int ans = -1;
        while(low<=high){

            int mid = (low+high)/2;

            if(nums[mid]==target){
                ans = mid;
                
                if(dir==0){
                    high = mid-1;
                }
                else{
                    low = mid+1;
                }
            }
            else if(nums[mid]<target) low = mid+1;
            else high = mid-1;
        }

        return ans;

    }
    
    int countFreq(vector<int>& arr, int target) {
        // code here
        
        
        int fir = binary_search(arr, target , 0);
        int sec = binary_search(arr, target , 1);

        if(fir==-1 and sec==-1) return 0;
        
        return sec-fir+1;
        
    }
};


//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        int ans = ob.countFreq(arr, d);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends