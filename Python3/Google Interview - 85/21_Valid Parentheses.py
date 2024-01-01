# Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

# An input string is valid if:

# Open brackets must be closed by the same type of brackets.
# Open brackets must be closed in the correct order.
# Every close bracket has a corresponding open bracket of the same type.

class Solution:
    def isValid(self, s: str) -> bool:
        table = {
            '}' : '{',
            ']' : '[',
            ')' : '('
        }
        
        stack = []
        for i in range(len(s)):
            if s[i] not in table:
                stack.append(s[i])
            elif stack:
                if stack[-1] != table[s[i]]:
                    return False
                else:
                    stack.pop()
            else:
                return False
        return len(stack) == 0