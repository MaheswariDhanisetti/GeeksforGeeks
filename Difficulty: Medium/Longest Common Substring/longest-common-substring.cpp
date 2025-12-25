class Solution {
  public:
    int longestCommonSubstr(string str1, string str2) {
        
        vector<vector<int>>dp(str1.size()+1 , vector<int>(str2.size()+1 , 0));
        
        int maxLength = 0;
        
        for(int i = 1;i<=str1.size();i++)
        {
            for(int j = 1;j<=str2.size();j++)
            {
                
                if(str1[i-1] == str2[j-1])
                {
                    dp[i][j] = dp[i-1][j-1]+1;
                }
                maxLength = max(maxLength , dp[i][j]);
                
                // cout<<dp[i][j]<<" ";
            }
            // cout<<endl;
        }
        
        return maxLength;

    }
};
