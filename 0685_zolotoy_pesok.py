e = list(map(int, input().split()))

med_a = med_b = 0

for i in range(3):
    if i != max(e[:3]) and i != min(e[:3]):
        med_a = i
    if (e[i+3] != max(e[3:])) and (e[i+3] != min(e[3:])):
        med_b = e[i+3]

if med_a == 0:
    med_a = max(e[:3])
if med_b == 0:
    med_b = max(e[3:])

money1 = max(e[:3]) * max(e[3:])
money2 = med_a * med_b 
money3 = min(e[:3]) * min(e[3:])

print(money1, money2, money3)

print(money1 + money2 + money3)
