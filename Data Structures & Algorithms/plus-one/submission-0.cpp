class Solution {
public:
    vector<int> plusOne(vector<int>& d) {
        reverse(d.begin(),d.end());
        int carry=0;
        for(int i=0 ;i<d.size();i++){
            if(i==0){
                int s= d[i]+carry+1;
                d[i]=s%10;
                carry=s/10;
            }else{
                int s= d[i]+carry;
                d[i]=s%10;
                carry=s/10;
            }
        }
        if(carry) d.push_back(1);
        reverse(d.begin(),d.end());
        return d;
        
    }
};
