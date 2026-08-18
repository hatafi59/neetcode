class Solution {
    void backtrack(vector<vector<int>> &res ,vector<int> &nums ,vector<int> &permutation ,int &sum  ,int m , int target){
        if(sum==target){
            res.push_back(permutation);
            return;
        }
        for(int i = m ; i<nums.size() && sum<target;i++){
            // if(sum>=target ) continue;
            sum+=nums[i];
            permutation.push_back(nums[i]);
            cout<<sum<<" ";
            backtrack(res,nums,permutation,sum,i,target);
            sum -= nums[i]; 
            permutation.pop_back();
        }
        return ;

    }
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        vector<int>visited(nums.size(),0);
        vector<int> permutation ;
        int sum=0;
        backtrack(res,nums,permutation ,sum,0,target);
        return res;
        
    }
};
