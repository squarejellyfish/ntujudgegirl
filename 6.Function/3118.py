table = {"-----": "0",
         ".----": "1",
         "..---": "2",
         "...--": "3",
         "....-": "4",
         ".....": "5",
         "-....": "6",
         "--...": "7",
         "---..": "8",
         "----.": "9",
         }

def transform(lst):

    curr = ""
    for char in lst:
        try:
            curr += table[char]
        except KeyError:
            return "error"
    
    return curr

problems = []
while True:
    prob = input()
    if prob == "-1":
        break

    problems.append(prob)

for prob in problems:
    prob = [x for x in prob.split(" ") if x != ""]

    print(transform(prob))
