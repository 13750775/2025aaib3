#week01-2 用for迴圈
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        H=len(haystack)#字串長度
        N=len(needle)#字串長度
        for i in range(H-N+1):
            if haystack[i:i+N] == needle:
                return i
        return -1
