ans = [x[::-1] for x in input().split(',')]

print(ans.pop(0), end='')
for a in ans:
    print(",{}".format(a), end='')
