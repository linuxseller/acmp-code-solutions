t1, t2 = map(int, input().split())
mode = input()
if mode == "fan":
    print(t1)
elif mode == "auto":
    print(t2)
elif mode == "freeze":
    if t1>t2:
        print(t2)
    else:
        print(t1)
else:
    if t1<t2:
            print(t2)
    else:
            print(t1)