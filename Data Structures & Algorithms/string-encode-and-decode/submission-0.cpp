class Solution {
public:

    string encode(vector<string>& strs) {
        string res="";
        for(string &item : strs){
            int l=item.size();
            string s=to_string(l) ;
            while(s.size()<3) s="0"+s ;
            res+=s+item;
        }
        return res ;

    }

    vector<string> decode(string s) {
        vector<string> res;
        int i=0;
        while(i<s.size() ){
            string length = s.substr(i,3);
            int l=stoi(length);
            res.push_back(s.substr(i+3,l));
            i+=l+3;
        }
        return res;
    }
};
