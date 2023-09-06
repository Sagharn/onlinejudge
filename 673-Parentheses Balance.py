def is_correct_string(s):
    stack = []
    for c in s:
        if c == '(' or c == '[':
            stack.append(c)
        elif c == ')' and (not stack or stack[-1] != '('):
            return False
        elif c == ']' and (not stack or stack[-1] != '['):
            return False
        elif c == ')' or c == ']':
            stack.pop()
    return len(stack) == 0


def check_string(strings):
    result = []
    for s in strings:
        if is_correct_string(s):
            result.append('Yes')
        else:
            result.append('No')
    return result


n = int(input())
strings = []
for _ in range(n):
    s = input()
    strings.append(s)

output = check_string(strings)

for o in output:
    print(o)
