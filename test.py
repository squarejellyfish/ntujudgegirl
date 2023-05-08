import os
import shutil

files = {
    "236",
    "21",
    "22",
    "128",
    "218",
    "50",
    "37"
}
ls = os.listdir()
targetdir = "25.Function/"
os.mkdir(targetdir)

for file in ls:
    ext = file.split(".")[-1]
    name = file.split(".")[0]

    if (ext == 'c' or 'py') and name in files:
        print(f"moved {file} to folder.")

        os.rename(file, targetdir + file)

    # if name in files:
    #     print(f"moved {file} to folder")
    #     shutil.move(file, targetdir)
