n = int(input())

for i in range(n + 1):
    curr = i + 1

    spaces = "  " * (n - curr)

    if (i == n):
        print("||" * i)
        continue

    print(spaces + "__" + "||" * i)
