class Solution {
    void backtrack(vector<vector<int>> &res,vector<int> &nums ,vector<int> &permutation ,int m){
        res.push_back(permutation);
        for(int i=m ; i<nums.size() ;i++){
            if(i>m && nums[i]==nums[i-1]) continue;
            permutation.push_back(nums[i]);
            backtrack(res,nums,permutation,i+1);
            permutation.pop_back();
        }
        return ;
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> permutation;
        sort(nums.begin(),nums.end());
        backtrack(res,nums,permutation,0);
        return res ;
        
    }
};
