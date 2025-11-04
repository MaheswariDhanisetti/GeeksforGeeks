class Solution {
  public:
    int minCost(vector<int>& height) {
        // Code here
        
        if(height.size() == 1) return 0;
        
        vector<int>dp(height.size() , 0);
        
        dp[1] = abs(height[1] - height[0]);
        
        for(int i = 2;i<height.size();i++)
        {
            dp[i] = min(dp[i-1]+abs(height[i] - height[i-1]) , dp[i-2]+abs(height[i]-height[i-2]));
            
        }
        
        return dp[height.size()-1];
    }
};