class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    unordered_set<int> myset(nums.begin(), nums.end());
    int max_length = 0;
    for (int ele : myset) {
        if (myset.find(ele - 1) == myset.end()) {
            int lenght_actuelle = 1;
            while (myset.find(ele + 1 ) != myset.end()) {
                ele++;
                lenght_actuelle++;
            }
            max_length = max(max_length, lenght_actuelle);
        }
    }
    return max_length;
    }
};
