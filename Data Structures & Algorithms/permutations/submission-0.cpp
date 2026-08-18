class Solution {
        void backtrack(vector<vector<int>> &res , vector<int>& nums , vector<int>& permutation , vector<bool> visited ){
        if(permutation.size()==nums.size()){
            res.push_back(permutation);
            return ;
        }
        for(int i=0 ; i<nums.size() ; i++){
            if(!visited[i]){
                visited[i] = 1;
                permutation.push_back(nums[i]);
                backtrack(res,nums,permutation,visited);
                visited[i]=0;
                permutation.pop_back();
            }
        }
        return ;
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
         vector<vector<int>> res;
        vector<int> permutation ;
        vector<bool> visited(nums.size(),0);
        backtrack(res,nums,permutation ,visited);
        return res;
    }
};
