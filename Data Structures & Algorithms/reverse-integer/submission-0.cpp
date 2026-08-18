class Solution {
public:
    const int MIN=-pow(2,31);
    const int MAX=pow(2,31)-1;
    int reverse(int x) {
        int res=0;
        while(x){
            int digit = x%10;
            x/=10;
            if(res > MAX/10 || (res==MAX/10 && digit > 7))
                return 0;
            if(res<MIN/10 || (res==MIN/10 && digit >8)) return 0 ;
            res=(res*10)+digit ;          
        }
        return res ;

        
    }
};
