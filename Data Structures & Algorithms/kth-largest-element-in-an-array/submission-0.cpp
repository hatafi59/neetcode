class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> Q(nums.begin(), nums.end());
        while(k>1) {Q.pop(); k--;}
        return Q.top();
        
    }
};
