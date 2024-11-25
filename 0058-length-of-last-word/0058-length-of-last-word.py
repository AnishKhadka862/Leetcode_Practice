class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        count = 0
        if not s:
            return 0
        for i in range(len(s) - 1, -1, -1):
            if s[i] == " ":
                continue
            if s[i] != " ":
                count += 1
                if s[i - 1] == " " or i == 0:
                    break
        return count
            


        
        