str_hod = input()
digit = "12345678"
lt = "ABCDEFGH"
if len(str_hod) == 5 and \
        str_hod[0] in lt and \
        str_hod[4] in digit and \
        str_hod[1] in digit and \
        str_hod[3] in lt and \
        str_hod[2] == "-":
    first_l = str_hod[0]
    last_l = str_hod[3]
    first_d = int(str_hod[1])
    last_d = int(str_hod[4])
    if abs(lt.index(first_l) - lt.index(last_l)) == 1 and abs(first_d - last_d) == 2 or abs(first_l.index(first_l) - last_l.index(last_l)) == 2 and abs(first_d - last_d) == 1:
        print("YES")
    else:
        print("NO")
else:
    print("ERROR")


