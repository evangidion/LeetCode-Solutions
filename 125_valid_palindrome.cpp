/*

A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

*/

class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> res;
        for(int i = 0; i < s.size(); i++) {
            if(isalnum(s[i])) {
                if(s[i] >= 65 && s[i] <= 90) s[i] += 32;
                res.push_back(s[i]);
            }
        } 
        int i = 0, j = res.size() - 1;
        while(i <= j) {
            if(res[i] != res[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};