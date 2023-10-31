lst=list(map(int,input().split()))
print(max(lst) if max(lst)<728 and min(lst)>93 else "Error")