n,_= map(int, input().split())
mn = 1000
for i in range(n):
    iinput = input()
    if iinput.count(".") < mn:
        mn = iinput.count(".")
print(mn)
