import os, shutil

ls = os.listdir()

for folder in ls:
    print(folder)
    shutil.move(folder, "../7.File/")
