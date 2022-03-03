import numpy as np
Sl = np.array(range(16)).reshape(4,-1)
S = np.array(Sl)

print(S)
print(S[:,0:2])
print(np.sum(S,axis=1))

