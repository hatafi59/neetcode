class Solution {
    void backtrack(vector<string> &res,string &digits ,string &temp ,int i,vector<string> &map){
        if(temp.size()==digits.size()){
            res.push_back(temp);
            return ;
        }
        string chars = map[digits[i] - '0'];
        for(auto &c: chars){
            temp+=c;
            backtrack(res,digits,temp,i+1,map);
            temp.pop_back();
        }
        return;
    }
public:
    vector<string> letterCombinations(string digits) {
    vector<string> res;
    vector<string> map = {"", "", "abc", "def", "ghi", "jkl", 
                            "mno", "qprs", "tuv", "wxyz"};
    string temp="";
    if(digits.empty()) return res;
    backtrack(res,digits,temp,0,map);
        return res;
    }
};
