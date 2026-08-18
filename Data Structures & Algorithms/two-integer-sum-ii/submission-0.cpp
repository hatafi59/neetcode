class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
     
        if (numbers.size() == 2)
            return {1,2};
        int left = 0 ;
        int right = numbers.size()-1 ;
        vector<int> result;
        
        while( left < right ){
            if( numbers[left] + numbers[right] > target ){
                right-- ;
            }else if(numbers[left] + numbers[right] < target){
                left++ ;
            }else{
                result.push_back(left+1) ;
                result.push_back(right+1);
                break ;
            }
        }
     return result ;


    }
};