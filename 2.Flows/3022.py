nums = [int(x) for x in input().split(',')]

sum_even = 0
sum_odd = 0
s = 0

for num in nums:
    if num % 2 == 0:
        sum_even += num
    else:
        sum_odd += num

    s += num

print(sum_odd)
print(sum_even)
print(s)
