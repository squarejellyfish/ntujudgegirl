import re
s = input()
d = input()

s = re.sub('[^0-9a-zA-Z ]+', '', s)

print(s.count(d))
print(s.lower().count(d.lower()))
print(s.split().count(d))
