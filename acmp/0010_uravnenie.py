a, b, c, d = map(int, input().split())
answ = []
for x in range(-100, 101):
    if a*x**3+b*x**2+c*x == 0-d:
        answ += [x]
print(*answ)