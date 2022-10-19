totalangka = str(input())
count1 = 0
count2 = 0
count3 = 0
for x in totalangka:
    if x == '+':
        continue
    elif x == '1':
        count1 += 1
    elif x == '2':
        count2 += 1
    elif x == '3':
        count3 += 1
total = ''
jumlah = count1 + count2 + count3
for x in range(count1):
    total = total + '1'
    jumlah -= 1
    if jumlah != 0:
        total = total + '+'
    else:
        continue
for x in range(count2):
    total = total + '2'
    jumlah -= 1
    if jumlah != 0:
        total = total + '+'
for x in range(count3):
    total = total + '3'
    jumlah -= 1
    if jumlah != 0:
        total = total + '+'
print(total)