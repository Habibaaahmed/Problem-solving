class Solution {
public:
    bool isPalindrome(int x) {
        string x_str=to_string(x);
        reverse(x_str.begin(),x_str.end());
        return to_string(x)== x_str;
    }
};