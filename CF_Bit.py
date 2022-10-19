berapakali = int(input())
jumlahx = 0
for x in range(berapakali):
    nama = str(input())
    kontol = len(nama)
    counta = 0
    countb = 0
    for x in range(kontol):
        if nama[x] == '-':
            counta += 1
            if counta == 2:
                jumlahx -= 1
        elif nama[x] == '+':
            countb += 1
            if countb == 2:
                jumlahx += 1
print(jumlahx)
