class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlength=0;
        unordered_set<char> freq;
        int start=0;
        for(int end=0;end<s.size();end++){
                while(!freq.insert(s[end]).second){
                    freq.erase(s[start++]);
                }
            maxlength=max(maxlength,end-start+1);
        }
        return maxlength;
    }
};
