class Solution {
    bool ispalandrome(string s,int l ,int r  ){
        while(l<=r)
            if(s[l++]!=s[r--]) 
                return false;
        return true;
    }
    void backtrack(vector<vector<string>> &res , string s , vector<string> &perm , int m){
        if(m==s.size())
        {res.push_back(perm);
        return ;}
        for(int i=m ;i<s.size() ;i++){
            if(ispalandrome(s,m,i)){
                perm.push_back(s.substr(m,i-m+1));
                backtrack(res,s,perm,i+1);
                perm.pop_back();
            }
        }
        return;
    }
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res ;
        vector<string> perm;
        backtrack(res,s,perm,0);
        return res ;
    }
};
