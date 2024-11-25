class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        for brac in s:
            if brac == '(' or brac == '{' or brac == '[':
                stack.append(brac)
            elif brac == ')' and stack and stack[-1] == '(':
                stack.pop()
            elif brac == '}' and stack and stack[-1] == '{':
                stack.pop()
            elif brac == ']' and stack and stack[-1] == '[':
                stack.pop()
            else:
                return False

        return len(stack) == 0