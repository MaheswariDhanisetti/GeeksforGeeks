//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
/*You are required to complete this method */

class Solution
{
      public:
    int josephus(int n, int k)
    {
       //Your code here
       vector<int>v(n,0);
       for(int i=0;i<n;i++){
           v[i]=i+1;
       }
       int i=0;
       int temp=k;
       int cnt=0;
       while(cnt<n-1){
            while(temp){
                if(v[i]!=-1){
                    temp--;
                }
                if(temp==0)break;
                i++;
                i=i%n;
            }
            if(temp==0){
                temp=k;
                v[i]=-1;
                cnt++;
            }
       }
       for(int i=0;i<v.size();i++){
           if(v[i]!=-1)return i+1;
       }
    }
};



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n,k;
		cin>>n>>k;//taking input n and k
		
		//calling josephus() function
		Solution ob;
		cout<<ob.josephus(n,k)<<endl;
	}
	return 0;
}
// } Driver Code Ends