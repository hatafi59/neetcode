class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int> lastseen;
        for(int i=0; i<s.size() ;i++) lastseen[s[i]]=i;
        vector<int> result ;
        int start=0, sofar=0;
        for(int i=0 ; i<s.size() ;i++){
            sofar=max(sofar,lastseen[s[i]]);
            if(i==sofar){
                result.push_back(i-start+1);
                start=i+1;
            }
        }
        return result;
    }
};
