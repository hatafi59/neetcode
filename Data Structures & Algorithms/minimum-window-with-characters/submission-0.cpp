class Solution {
public:
    string minWindow(string s, string t) {
       if (t.empty()) return "";

        unordered_map<char, int> countT;
        for (char c : t) countT[c]++;

        unordered_map<char, int> windowCounts;

        int required = countT.size(); 
        int formed = 0;              

        int l = 0, r = 0;
        int minLen = INT_MAX;
        int minStart = 0;

        while (r < (int)s.size()) {
            char c = s[r];
            windowCounts[c]++;

            if (countT.count(c) && windowCounts[c] == countT[c]) {
                formed++;
            }

            while (l <= r && formed == required) {
                c = s[l];

                if (r - l + 1 < minLen) {
                    minLen = r - l + 1;
                    minStart = l;
                }

                windowCounts[c]--;
                if (countT.count(c) && windowCounts[c] < countT[c]) {
                    formed--;
                }
                l++;
            }

            r++;
        }

        return minLen == INT_MAX ? "" : s.substr(minStart, minLen);
        
    }
};