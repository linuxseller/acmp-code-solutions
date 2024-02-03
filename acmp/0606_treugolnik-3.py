a, b, c = map(int, input().split())
answ = "NO"
if a+b>c and b+c>a and a+c>b:
    answ = "YES"
print(answ)