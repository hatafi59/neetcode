class Solution {
        void backtrack(vector<vector<int>> &res ,vector<int> &nums ,vector<int> &permutation ,int &sum  ,int m , int target){
        if(sum==target){
            res.push_back(permutation);
            return;
        }
        for(int i = m ; i<nums.size() && sum<target;i++){
            // if(sum>=target ) continue; 
            if(i>m && nums[i]==nums[i-1]) continue;// i>m c'est pour eviter ambiguite de i avec i-1
            sum+=nums[i];
            permutation.push_back(nums[i]);
            cout<<sum<<" ";
            backtrack(res,nums,permutation,sum,i+1,target);
            sum -= nums[i]; 
            permutation.pop_back();
        }
        return ;

    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        sort(candidates.begin(),candidates.end());
        vector<int> permutation ;
        int sum=0;
        backtrack(res,candidates,permutation ,sum,0,target);
        return res;
        
    }
};
