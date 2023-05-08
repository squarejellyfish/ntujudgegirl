table = {'A': 10, 'J': 18, 'S': 26,
         'B': 11, 'K': 19, 'T': 27,
         'C': 12, 'L': 20, 'U': 28,
         'D': 13, 'M': 21, 'V': 29,
         'E': 14, 'N': 22, 'W': 32,
         'F': 15, 'O': 35, 'X': 30,
         'G': 16, 'P': 23, 'Y': 31,
         'H': 17, 'Q': 24, 'Z': 33,
         'I': 34, 'R': 25
         }


def ID_checker(nums):
    if (len(nums) != 10):
        return 1

    s = 0
    for i, num in enumerate(nums):

        if not i:
            n = table[num]
            s += (n % 10) * 9
            s += n // 10
            continue

        if i == 9:
            s += int(num)

        mul = 9 - i
        s += int(num) * mul

    if s % 10 == 0:
        return s
    else:
        return 1


while True:
    curr = input().upper()
    if curr == '-1':
        break

    ans = ID_checker(curr)
    if ans % 10 == 0:
        print('real')
    else:
        print('fake')
