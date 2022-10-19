nama = str(input())
for x in nama:
    if ord(x) > 90:
        kentot = nama.replace(x,chr(ord(x) - 32))
        print(kentot)
        break
    else:
        print(nama)
        break