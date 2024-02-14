/*

Given a string s consisting of lowercase English letters, return the first letter to appear twice.

Note:

A letter a appears twice before another letter b if the second occurrence of a is before the second occurrence of b.
s will contain at least one letter that appears twice.

*/

class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char, char> h;
        char res;
        for(int i = 0; i < s.size(); i++) {
            if(h.find(s[i]) == h.end()) h[s[i]] = s[i];
            else {
                res = s[i];
                break;
            }
        }
        return res;
    }
};