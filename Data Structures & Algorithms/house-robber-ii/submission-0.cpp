class Solution {
public:
    
    int fct(vector<int>& nums) {
        vector<int> memo(nums.size());
        if (nums.empty()) return 0; 
        if(nums.size()==2) return max(nums[0],nums[1]);
        if(nums.size()==1) return nums[0];
        memo[0]=nums[0];
        memo[1]=max(nums[0], nums[1]);;
        for(int i=2 ; i<nums.size(); i++){
            memo[i]=max(nums[i]+memo[i-2],memo[i-1]);
        }
        return memo[memo.size()-1] ;
    }
    int rob(vector<int>& nums) {
        if (nums.empty()) return 0; 
        if(nums.size()==2) return max(nums[0],nums[1]) ;
        if(nums.size()==1) return nums[0];
        vector<int> left(nums.begin(),nums.end()-1);
        vector<int> right(nums.begin()+1,nums.end());
        return max(fct(left),fct(right));
        
    }
};