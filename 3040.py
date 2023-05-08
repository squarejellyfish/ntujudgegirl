
tg = ['甲','乙','丙','丁','戊','己','庚','辛','壬','癸']
dz = ['子','丑','寅','卯','辰','巳','午','未','申','酉','戌','亥']

def YEAR(lst):

    for l in lst:

        year = int(l)

        tgi = (year - 3) % 10 - 1
        dzi = (year - 3) % 12 - 1

        print("{} = {}{}年".format(year, tg[tgi], dz[dzi]))

years = []

while True:
    year = input()

    if year == "q":
        break

    years.append(year)

YEAR(years)
    
