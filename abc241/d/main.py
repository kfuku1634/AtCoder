class FenwickTree:
    def __init__(self,n):
        self.n = n
        self.ft = [0] * n
    def add(self, idx, x):
        fi = idx+1
        while fi <= self.n:
            self.ft[fi-1] += x
            fi += (fi & -fi)
    def _sum(self, idx):
        fi = idx+1
        s = 0
        while fi != 0:
            s += self.ft[fi-1]
            fi -= (fi & -fi)
        return s
    def sum(self, idx1, idx2):
        if idx1 < idx2: idx1,idx2 = idx2,idx1
        return self._sum(idx1) - self._sum(idx2)

def bs_upper(x,k):
    l = 0
    r = len(A) - 1
    if FT.sum(r,l) < k:
        return -1
    while (r-l) != 1:
        c = (r+l) // 2 
        if FT.sum(c,r) >= k:
            l = c
        else:
            r = c
    return r

def bs_lower(x,k):
    l = 0
    r = len(A) - 1
    if FT.sum(r,l) < k:
        return -1
    while (r-l) != 1:
        c = (r+l) // 2 
        if FT.sum(c,r) <= k:
            l = c
        else:
            r = c
    return l

Q = int(input())

A = [ ]
query = []
for _ in range(Q):
    q = list(map(int,input().split()))
    if q[0] == 1:
        A.append(q[1])
    query.append(q)

num2idx = {}
idx2num = {}
for i,a in enumerate(list(set(A))):
    num2idx[a] = i
    idx2num[i] = a

FT = FenwickTree(len(A))
for q in query:
    if q[0] == 1:
        FT.add(num2idx[q[1]],1)
    elif q[1] == 2:
        m = bs_upper(q[1],q[2])
        print(idx2num[m])
    else:
        m = bs_lower(q[1],q[2])
        print(idx2num[m])

