'''

Given two binary strings a and b, return their sum as a binary string.

'''

class Solution:
    def addBinary(self, a: str, b: str) -> str:
        if a == '0':
            return b
        elif b == '0':
            return a
        carry = 0
        res = ""
        i = len(a) - 1
        j = len(b) - 1
        while(True):
            if i >= 0 and j >= 0:
                if a[i] == '1' and b[j] == '1':
                    if carry:
                        res = '1' + res
                    else:
                        res = '0' + res
                        carry = 1
                elif a[i] == '1' and b[j] == '0':
                    if carry:
                        res = '0' + res
                    else:
                        res = '1' + res
                elif a[i] == '0' and b[j] == '1':
                    if carry:
                        res = '0' + res
                    else:
                        res = '1' + res
                else:
                    if carry:
                        res = '1' + res
                        carry = 0
                    else:
                        res = '0' + res
            elif i < 0 and j < 0:
                break
            elif i < 0:
                if b[j] == '1':
                    if carry:
                        res = '0' + res
                    else:
                        res = '1' + res
                else:
                    if carry:
                        res = '1' + res
                        carry = 0
                    else:
                        res = '0' + res
            else:
                if a[i] == '1':
                    if carry:
                        res = '0' + res
                    else:
                        res = '1' + res
                else:
                    if carry:
                        res = '1' + res
                        carry = 0
                    else:
                        res = '0' + res
            i -= 1
            j -= 1
        if carry:
            res = '1' + res
        return res