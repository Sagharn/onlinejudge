def ch(s):
    m = ""
    c = 0
    for i in range(len(s)):
        if s[i] == ' ':
            c = 1
        elif c == 1:
            m += s[i]
    return m


n = int(input())
dreamStack = []

for _ in range(n):
    s = input().rstrip()

    if s == "Kick":
        if len(dreamStack) > 0:
            dreamStack.pop()
    elif s == "Test":
        if len(dreamStack) > 0:
            print(dreamStack[-1])
        else:
            print("Not in a dream")
    else:
        dreamStack.append(ch(s))
