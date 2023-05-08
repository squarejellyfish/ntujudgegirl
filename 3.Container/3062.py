n = int(input())
l = []

for i in range(n, 0, -1):
    l.append(i)
    print("data {}".format(i))

print()

for i in reversed(l):
    print("data {}".format(i))
