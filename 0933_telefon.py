a, b, c, t = map(int, input().split())
if t < a:
    print(t * b)
else:
    print(((t-a)*c)+((t-(t-a)) * b))
