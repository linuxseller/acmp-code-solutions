c, h, o = map(int, input().split())
h = h-o
if c >= 2 and h >= 5 and o >= 1:
    c /= 2
    h /= 5
    print(int(min(c, h, o)))
else:
    print(0)
