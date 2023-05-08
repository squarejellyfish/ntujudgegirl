ans = []
sum_ = 0

while 1:
    num = int(input())
    if num == -1:
        break

    if (num > 30):
        sum_ += num

    ans.append(num)

print(ans)
ans.sort()
print(ans)
print(sum_)
