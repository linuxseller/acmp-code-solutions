n = int(input())
nums = list(map(int, input().split()))
sm = sum([num*(num>0) for num in nums])
mnI = nums.index(min(nums))
mxI = nums.index(max(nums))
if mnI>mxI:
    mnI, mxI = mxI, mnI
ml = nums[mnI+1:mxI]
mlAnsw = 1
for i in ml:
    mlAnsw *= i
print(sm, mlAnsw)