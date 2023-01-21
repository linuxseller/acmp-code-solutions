c1=0
c2=0
a=int(input())
for i in range(a):
    if input()=='0':
        c1+=1
    else:
        c2+=1
if c1<=c2:
    print(c1)
else:
    print(c2)