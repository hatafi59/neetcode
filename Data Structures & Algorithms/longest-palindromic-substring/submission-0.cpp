class Solution {
public:
    string longestPalindrome(string s) {
        int resLen=0,resl=0,resr=0;
        for(int i=0 ; i<s.size() ;i++){
            //odd
            int l=i,r=i;
            while(l>-1 && r<s.size() && s[l]==s[r]){
                if(r-l+1 > resLen){
                    resLen=r-l+1;
                    resl=l;
                    resr=r;
                }
                l--;r++;
            }

            //even
            l=i,r=i+1;
            while(l>-1 && r<s.size() && s[l]==s[r]){
                if(r-l+1 > resLen){
                    resLen=r-l+1;
                    resl=l;
                    resr=r;
                }
                l--;r++;
            }
        }

        return s.substr(resl,resr-resl+1);
        
    }
};
