class Solution {
public:
    int characterReplacement(string s, int k) {
    unordered_map<char,int> map ;
    int left = 0 ;
    int right = 0 ;
    int mostfreqcharnbr = 0 ;
    for(right = 0 ; right < s.size() ; right++){
        map[s[right]]++ ;
        mostfreqcharnbr = max(mostfreqcharnbr,map[s[right]]) ;
        if(right - left + 1   > k+mostfreqcharnbr ){
            map[s[left++]]-- ;
        }
    }
    return right - left ;
    }
};
