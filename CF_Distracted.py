ans = []
for _  in range(int(input())):
    _ = input()
    x = [str(x) for x in input()]
    x = list(x)
    temp = x[0]
    cek = 1
    isloop = False
    for y in range(1,len(x)):
        if x[y] == temp:
            cek+=1
        elif x[y] != temp:
            if x.count(temp) != cek:
                isloop = True
                break
            temp = x[y]
            cek = 1
    if isloop == False:
        ans.append('YES')
    else:
        ans.append('NO')
print(*ans,sep='\n')