class Solution {
public:
void backtrack1(vector<vector<int>> &res,vector<int> &nums ,vector<int> &permutation ,int m  ){
    
        res.push_back(permutation);
    for (int i = m; i < nums.size(); i++) {
            permutation.push_back(nums[i]);
            backtrack1(res, nums, permutation, i+1);
            permutation.pop_back();
        } 
    return ;
    }
vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> res ;
    vector<int> permut ;
    backtrack1(res,nums,permut,0);
    return res;
    }
};
