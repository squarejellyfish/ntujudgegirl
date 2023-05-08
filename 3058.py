k = int(input())
l = int(input())
ksum = 0
lsum = 0

grades = ['A+','A','A-','B+','B','B-','C+','C','C-','F']

while 1:
    curr = input()
    if curr == "q":
        break
    curr = curr.split(",")

    if curr[1] == grades[-1]:
        continue

    if curr[-2] == "R":
        ksum += int(curr[-1])

    if curr[-2] == "E":
        lsum += int(curr[-1])

if ksum >= k and lsum >= l:
    print("yes")
else:
    print("no")
