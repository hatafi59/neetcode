class Solution {
public:
    bool isPalindrome(string s) {
      string temp ="";
    transform(s.begin(), s.end(), s.begin(), [](unsigned char s) { return tolower(s); });
    for(int i = 0 ; i<s.size() ; i++ ){
        if(isalnum(s[i]))
            temp += s[i] ;
    }
    string origine = temp ;
    reverse(temp.begin(), temp.end());

    return temp == origine  ;
    return true;  
    }
};