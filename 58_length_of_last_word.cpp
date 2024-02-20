/*

Given a string s consisting of words and spaces, return the length of the last word in the string.

A word is a maximal substring consisting of non-space characters only.

*/

class Solution {
public:
    int lengthOfLastWord(string s) {
        // vector<int> c;
        // int temp = 0;
        // for(int i = 0; i < s.size(); i++) {
        //     if(s[i] != ' ') temp++;
        //     else if(temp) {
        //         c.push_back(temp);
        //         temp = 0;
        //     }
        // }
        // if(temp) c.push_back(temp);
        // return c[c.size()-1];
        
        // int temp = 0;
        // int res;
        // for(int i = 0; i < s.size(); i++) {
        //     if(s[i] != ' ') temp++;
        //     else if(temp) {
        //         res = temp;
        //         temp = 0;
        //     }
        // }
        // if(temp) res = temp;
        // return res;

        int res = 0;
        bool first = true;
        for(int i = s.size()-1; i >= 0; i--) {
            if(s[i] != ' ') {
                res++;
                first = false;
            }
            else if(!first) break;
        }
        return res;
    }
};