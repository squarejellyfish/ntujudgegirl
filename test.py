import os
import shutil

files = {
    "23",
    "206",
    "72",
    "190",
    "129",
    "100",
}
ls = os.listdir()
targetdir = "27.Pointer/"
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
