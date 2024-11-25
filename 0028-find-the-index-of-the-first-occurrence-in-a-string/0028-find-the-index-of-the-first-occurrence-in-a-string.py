class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        size = len(haystack)
        if not haystack or not needle or len(haystack) < len(needle):
            return -1
        for i in range(len(haystack) - len(needle) + 1):
            if haystack[i:i+len(needle)] == needle:
                return i
        return -1