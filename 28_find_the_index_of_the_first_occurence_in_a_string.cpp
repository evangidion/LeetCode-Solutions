/*

Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

*/

class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size() > haystack.size()) return -1;
        vector<int> indexes;
        int n = 0;
        for(int i = 0; i < haystack.size(); i++) if(haystack[i] == needle[0]) indexes.push_back(i);
        for(int i = 0; i < indexes.size(); i++) {
            for(int j = 0; j < needle.size(); j++) {
                if(needle[j] != haystack[indexes[i]+j]) {
                    n = 0;
                    break;
                }
                else n++;
            }
            if(n == needle.size()) return indexes[i];
        }
        return -1;
    }
};