def cnt(money, data):
    if len(data)==0:
        return 0
    if money<data[0]:
        return 0
    return 1+cnt(money-data[0], data[1:])

_,money = map(int, input().split())
lst = sorted(list(map(int, input().split())))

print(cnt(money, lst))
