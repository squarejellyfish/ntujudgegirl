files = []

while 1:
    file = str(input())
    if file == '-1':
        break

    files.append(file)

txts = [file for file in files if file.split('.')[-1] == 'txt']
pys = [file for file in files if file.split('.')[-1] == 'py']
new_txt = []
new_py = []
for txt in txts:
    txt = txt.replace(txt[0], txt[0].upper(), 1)
    txt = 'T00_' + txt
    new_txt.append(txt)

for py in pys:
    name = py[:-3]
    name = 'P00_' + name.upper()
    new_py.append(name + '.py')

print(new_txt)
print(new_py)
