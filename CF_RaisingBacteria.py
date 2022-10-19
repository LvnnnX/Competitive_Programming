#101 = 5
#1<-010 = 10 
#1 2 4 8 16 32 64 + 1 + 32?
from math import *
t = int(input())
ans=0
while(t):
    x=1
    while(x<=t):
        x*=2
    if(int(ceil(x/2))!=1):
        t-=int(ceil(x/2))
    else:
        t-=1
    ans+=1
print(ans)
#1 2 4 = 1, 1? 3?