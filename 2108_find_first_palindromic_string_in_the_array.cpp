/*

Given an array of strings words, return the first palindromic string in the array. If there is no such string, return an empty string "".

A string is palindromic if it reads the same forward and backward.

*/

class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string res = "";
        bool isPalindrome;
        for(int i = 0; i < words.size(); i++) {
            isPalindrome = true;
            int s = 0;
            int e = words[i].size() - 1;
            while(s <= e) {
                if(words[i][s] != words[i][e]) {
                    isPalindrome = false;
                    break;
                }
                s++;
                e--;
            }
            if(isPalindrome) {
                res = words[i];
                break;
            }
        }
        return res;
    }
};