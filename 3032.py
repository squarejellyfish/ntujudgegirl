ans = []

while 1:
    num = input()
    if num == 'q':
        break

    try:
        num = float(num)
        if (int(num) == float(num)):
            num = int(num)
        ans.append(num)
    except ValueError:
        print("Please Enter Numbers Only")


dummy = ans.copy()
print(ans)
ans.sort()
print(ans)
ans.sort(reverse=True)
print(ans)
print(dummy)
