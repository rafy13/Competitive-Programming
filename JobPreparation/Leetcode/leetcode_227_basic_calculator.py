class Solution:
    def calculate(self, s: str) -> int:
        stack = []
        pos = 0
        num = 0
        operator = None

        def perform(operator, num):
            # print(f"operator ->>{operator}<<---")
            if operator == '*':
                num1 = stack.pop()
                stack.append(num*num1)
            elif operator == '/':
                num1 = stack.pop()
                stack.append(int(num1/num))
            elif operator == '-':
                stack.append(-num)
            else:
                stack.append(num)
                
        
        while pos < len(s):
            ch = s[pos]
            pos+=1
            
            if ch == ' ':
                continue
            
            if ch in ['+', '-', '*', '/']:
                perform(operator, num)
                num = 0    
                operator = ch
            else:
                num = num*10 + int(ch)
            # print(stack)
        
        perform(operator, num)
        
        return sum(stack)
