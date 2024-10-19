//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string roundToNearest(string str) {
        // Complete the function
        
        int n=str.size();
        char rem = str[n-1];
        str[n-1]='0';
        
        if(rem<='5'){
            return str;
        }
        else{
            
            int flag=0;
            for(int i=n-2;i>=0;i--){
                
                if(str[i]!='9'){
                    int val = str[i]-'0';
                    val+=1;
                    char ch = val+'0';
                    str[i]=ch;
                    flag=1;
                    break;
                }
                else{
                    str[i]='0';
                }
                
            }
            if(flag==0) str = '1'+str;
            return str;
        }
        
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.roundToNearest(str) << endl;
    }

    return 0;
}
// } Driver Code Ends