class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,1);
        for(int i=0 ;i<n ;i++){
            int j=i-1;
            while(j>-1){
                if(nums[j]<nums[i])
                    dp[i]=max(dp[i],dp[j]+1);
                j--;
            }
            cout<<dp[i]<<" ";
        }
        return *max_element(dp.begin(),dp.end());
        
    }
};
