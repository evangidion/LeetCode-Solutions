'''

Given a string s which consists of lowercase or uppercase letters, return the length of the longest palindrome that can be built with those letters.

Letters are case sensitive, for example, "Aa" is not considered a palindrome here.

'''

class Solution:
    def longestPalindrome(self, s: str) -> int:
        h = {}
        for i in range(len(s)):
            if s[i] in h:
                h[s[i]] += 1
            else:
                h[s[i]] = 1
        res = 0
        odd_list = []
        for i in h:
            if h[i] % 2 == 0:
                res += h[i]
            else:
                odd_list.append(h[i])
        odd_list.sort()
        max_flag = True
        for i in range(len(odd_list)-1, -1, -1):
            if max_flag:
                res += odd_list[i]
                max_flag = False
            else:
                res += odd_list[i]-1
        return res