'''

Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from magazine and false otherwise.

Each letter in magazine can only be used once in ransomNote.

'''

class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        h1 = {}
        h2 = {}
        for i in range(len(ransomNote)):
            if ransomNote[i] in h1:
                h1[ransomNote[i]] += 1
            else:
                h1[ransomNote[i]] = 0
        for i in range(len(magazine)):
            if magazine[i] in h2:
                h2[magazine[i]] += 1
            else:
                h2[magazine[i]] = 0
        if len(h2) < len(h1):
            return False
        for i in h1:
            if i not in h2:
                return False
            if h2[i] < h1[i]:
                return False
        return True