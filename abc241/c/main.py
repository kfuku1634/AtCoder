import numpy as np
from sys import stdin

N = int(input())
S_t = []
for _ in range(N):
    S_t.append(list(stdin.readline())[:-1])

flag = False

S = np.array(S_t)
S = np.where( S == "#", 1, 0)
A = S[:, ::-1]

list_range = list(range(N-5))
for n in list_range:
    if ( np.any( np.sum(S[n:n+6, :],axis=0) >= 4 ) == True or np.any(np.sum(S[:, n:n+6],axis=1) >=4 ) == True ):
        flag = True
        break

T_t = []
B_t = []
Nlist_range = list(range(-N+1,N))
for n in Nlist_range:
    d_line = np.diag(S,k=n).tolist()
    d_lineA = np.diag(A,k=n).tolist()
    if len(d_line) >= 6:
        for _ in range(N - len(d_line)):
            d_line.append(-6)
        T_t.append(d_line)
    if len(d_lineA) >= 6:
        for _ in range(N - len(d_lineA)):
            d_lineA.append(-6)
        B_t.append(d_lineA)

T = np.array(T_t)
B = np.array(B_t)

for n in list_range:
    if ( ( np.any( np.sum(T[:, n:n+6],axis=1) >= 4 ) ) == True or ( np.any( np.sum(B[: ,n:n+6],axis=1) >= 4 ) == True ) ) :
        flag = True
        break



if flag == True:
    print("Yes")
else:
    print("No")
