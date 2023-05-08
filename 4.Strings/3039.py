while True:
    file = str(input())
    if (file == '-1'):
        break

    ext = file.split('.')[-1]
    if ext == 'py':
        print(file)
