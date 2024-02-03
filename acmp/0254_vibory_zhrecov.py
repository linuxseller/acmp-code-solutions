n = int(input())
current = list(map(int, input().split()))
k = int(input())
for i in range(k):
    a,b = map(int, input().split())
    r = [ b if v == a else v for v in current]
    print(r)
