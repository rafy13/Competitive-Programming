class Expression:
    operators = ['+', '-']
    def __init__(self, s):
        self.expression = s
        self.current_pos = 0
        self.l = len(self.expression)
    
    def apply_operator(self, num, operator):
        if operator =='-':
            return -num
        return num
    
    def calc(self):
        stack = []
        num = 0
        operator = '+'
        

        while self.current_pos < self.l:
            ch = self.expression[self.current_pos]
            self.current_pos+=1
            if ch == ' ':
                continue

            if ch in Expression.operators:
                stack.append(self.apply_operator(num, operator))
                num = 0
                operator = ch
                continue
            elif ch == ')':
                stack.append(self.apply_operator(num, operator))
                num = 0
                break
            elif ch == '(':
                num = self.calc()
            else:
                num = num*10 + int(ch)
        stack.append(self.apply_operator(num, operator))

        return sum(stack)


class Solution:
    def calculate(self, s: str) -> int:
        e = Expression(s)
        return e.calc()