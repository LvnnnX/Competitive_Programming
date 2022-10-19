berapakali = int(input())
for x in range(berapakali):
    name = input()
    kontol = len(name)
    x = 1
    count = 0
    if len(name) > 10:
        print(name[0],kontol - 2,name[kontol - 1], sep='')
    else:
        print(name)