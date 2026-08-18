class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result(2) ;
        int i=0,j=1;
        while(i<nums.size() ){
            if(nums[i]+nums[j]==target){
                result[0]=i;
                result[1]=j;
                return result;
            }
            else if(j<nums.size()){
                j++;
            }
            else{
                i++;
                j=i+1;
            }
            
        }
        
    }
};
