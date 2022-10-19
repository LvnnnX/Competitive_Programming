nama1 = str(input())
nama2 = str(input())
summ = 0
suml = 0
for x in nama1:
    y = ord(x)
    if y < 91:
        y += 32
        summ += y
    else:
        summ += y
for x in nama2: 
    j = ord(x)
    if j < 91:
        j += 32
        suml += j
    else:
        suml += j
if summ == suml:
    print('0')
elif summ > suml:
    print('1')
elif suml > summ:
    print('-1')
print(summ,suml)