//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char>st;
        
        for(int i=0;i<x.size();i++){
            char ch= x[i];
            if((ch==')' or ch==']' or ch=='}') and !st.empty()){
                if((st.top()=='{' and ch=='}') or (st.top()=='[' and ch==']') or (st.top()=='(' and ch==')')){
                    st.pop();
                }
                else return false;
            }
            else if( ch=='(' or ch=='[' or ch=='{' ) st.push(ch);
            else return false;
            
        }
        
        return (st.empty())?true:false;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends