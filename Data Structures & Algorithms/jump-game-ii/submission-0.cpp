class Solution {
public:
    int jump(vector<int>& nums) {   // [2,3,1,1,4] --> 2
        int count=0;
        int sofar=0;
        int end=0;
        for(int i = 0 ; i<nums.size()-1 ; i++){
            sofar=max(sofar,i+nums[i]);
            if(i==end){
                count++;
                end = sofar;
            }
        }
        return count;
    }
};
