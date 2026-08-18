class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int s=accumulate(nums.begin(),nums.end(),0);
        if(s&1) return 0;

        vector<int> dp(s/2+1,0);
        cout<<dp.size();
        dp[0]=1;
        for(int i=0 ;i<n;i++)
            for(int j=s/2; j >= nums[i]; j--)
                if(dp[j-nums[i]]) dp[j]=1;
            
        

        return dp[s/2];
    }
};
