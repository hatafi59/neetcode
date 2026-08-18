// class Solution {
// public:
//     int getSum(int a, int b) {
//         return (a^b)+2*(a&b); //(a|b)+(a&b)
        
//     }
// };
class Solution {
public:
    int getSum(int a, int b) {
        while (b != 0) {
            int carry = (a & b) << 1;
            a ^= b;
            b = carry;
        }
        return a;
    }
};
