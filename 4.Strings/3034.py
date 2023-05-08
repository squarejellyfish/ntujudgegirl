lines = []

while 1:
    line = input()
    if line == '-1':
        break

    lines.append(line)

char = input()
l = len(max(lines))

for i in range(l + 2):
    print(char, end='')

print()

for line in lines:
    print(char + line, end='')
    spaces = l - len(line)
    for _ in range(spaces):
        print(" ", end='')
    print(char)

for i in range(l + 2):
    print(char, end='')

print()
