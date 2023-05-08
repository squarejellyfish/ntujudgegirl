import os

ls = os.listdir()

for file in ls:
    ext = file.split(".")[-1]
    name = file.replace(ext, "")
    new_name = name.replace("4.Strings", "")

    os.rename(file, new_name + ext)
