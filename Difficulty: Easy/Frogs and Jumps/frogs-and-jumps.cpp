// User function Template for C++

class Solution {
  public:
    int unvisitedLeaves(int N, int leaves, int frogs[]) {
        // Code here
        vector<int>vis(leaves+1 , 0);
        
        for(int i=0;i<N;i++){
            
            if(frogs[i]<=leaves && vis[frogs[i]]==0)
            {
                for(int j = frogs[i];j<=leaves;j+=frogs[i])
                {
                    vis[j]++;
                }
            }
        }
        
        
        int ans = 0;
        
        for(int i = 1;i<=leaves;i++)
        {
            if(vis[i]==0)
            {
                ans++;
            }
        }
        
        return ans;
    }
};
