from numpy import arange
import time
data = arange(10000,0,-1)
start=time.time()
data = sorted(data)
end=time.time()
print(end-start)