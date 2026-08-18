class Solution {
public:
   bool checkInclusion(string s1, string s2) {
    vector<int> count(26, 0);
    int required = s1.size();

    for (char c : s1) 
        count[c - 'a']++;

    int l = 0;
    for (int r = 0; r < (int)s2.size(); r++) {
        if (count[s2[r] - 'a'] > 0)
            required--;

        count[s2[r] - 'a']--;
        while (required == 0) {
            if (r - l + 1 == (int)s1.size())
                return true;

            count[s2[l] - 'a']++;
            if (count[s2[l] - 'a'] > 0)
                required++;
            l++;
        }
    }

    return false;
}

};