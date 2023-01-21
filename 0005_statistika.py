cou=int(input())
lst=list(map(int,input().split(' ')))

_3, _4 = [], []

for i in lst:
	if i % 2 == 0:
		_4.append(i)
		
	else:
		_3.append(i)

print(*_3)
print(*_4)

if len(_3)<=len(_4):
	print("YES")
else:
	print("NO")