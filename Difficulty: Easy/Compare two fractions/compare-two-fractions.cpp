//{ Driver Code Starts

#include <iostream>
#include <regex>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string compareFrac(string str) {

        // Code here
        string temp;
        int n1,n2;
        int idx;
        double val1=-1;
        double val2=-1;
        for(int i=0;i<str.size();i++){
            if(str[i]>='0' && str[i]<='9'){
                temp+=str[i];
            }
            else if(str[i]=='/'){
                n1=stoi(temp);
                temp="";
            }
            else if(str[i]==','){
                idx=i;
                n2=stoi(temp);
                temp="";
                val1= double(n1)/double(n2);
            }
        }
        n2=stoi(temp);
        val2=double(n1)/double(n2);
        
        
        if(val1>val2){
            return str.substr(0,idx);
        }
        else if(val2>val1){
            return str.substr(idx+2,str.size()-idx+2);
        }
        return "equal";
    }
};


//{ Driver Code Starts.

int main() {
    Solution ob;
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++) {

        string str;
        getline(cin, str);

        cout << ob.compareFrac(str) << endl;
    }
    return 0;
}

// } Driver Code Ends