class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
                unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }
        
        vector<int> res;
        vector<pair<int, int>> vec;
        for (auto it : freq) {
            vec.push_back(it);
        }
        
        sort(vec.begin(), vec.end(), [](pair<int, int>& a, pair<int, int>& b) {
            return a.second > b.second;
        });
        
        for (int i = 0; i < k; i++) {
            res.push_back(vec[i].first);
        }
        
        return res;
    }
};
