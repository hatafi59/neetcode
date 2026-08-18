class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int mx=1,mn=1;
        int res=INT_MIN;
        int t=1;
        for(int i=0 ; i<n ;i++){
            if(nums[i]){
                t=mx;
                mx=max(nums[i],max(nums[i]*mx,nums[i]*mn));
                mn=min(nums[i],min(nums[i]*t,nums[i]*mn));
                res=max(res,mx);
            }else{
                mx=1;mn=1;
                res=max(0,res);
            }
        }
        return res;
    }
};