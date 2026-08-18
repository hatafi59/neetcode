class Solution {
    string multiplyDigit(const string& num, char digit) {
        if (digit == '0') return "0";
        string res;
        int carry = 0;
        int d = digit - '0';
        
        for (int i = num.size() - 1; i >= 0; i--) {
            int product = (num[i] - '0') * d + carry;
            res.push_back(product % 10 + '0');
            carry = product / 10;
        }
        
        if (carry != 0) {
            res.push_back(carry + '0');
        }
        
        reverse(res.begin(), res.end());
        return res;
    }
    
    string addStrings(const string& num1, const string& num2) {
        string res;
        int i = num1.size() - 1, j = num2.size() - 1;
        int carry = 0;
        
        while (i >= 0 || j >= 0 || carry) {
            int n1 = (i >= 0) ? num1[i--] - '0' : 0;
            int n2 = (j >= 0) ? num2[j--] - '0' : 0;
            int sum = n1 + n2 + carry;
            res.push_back(sum % 10 + '0');
            carry = sum / 10;
        }
        
        reverse(res.begin(), res.end());
        return res;
    }

public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0";
        
        string result = "0";
        
        for (int i = num2.size() - 1; i >= 0; i--) {
            string temp = multiplyDigit(num1, num2[i]);
            temp.append(num2.size() - 1 - i, '0'); 
            cout<<temp<<" ";
            result = addStrings(result, temp);
        }
        
        return result;
    }
};