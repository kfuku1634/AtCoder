A, B, X = map(int, input().split())def d(N):    a=0    while(1):        if 10>N:            return a + 1        else:            N /=10            a += 1r = -1chousei = 1000for n in range(0,1000000000,chousei):    if X >= ( A*n + B*d(n) ):        r = nif r == -1:    print(0)elif r==0:    ans=-1    for N in range(0,chousei):        if X >= ( A*N + B*d(N) ):            ans = N    print(ans)else:        ans=-1    for N in range(r,r+chousei+1):        if X >= ( A*N + B*d(N) ):            ans = N    print(ans)