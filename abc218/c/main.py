import numpy as npdef check(N,S,T):    for i in range(N):        shift_S0 = np.roll(S,i,axis=0)        for j in range(N):            shift_S = np.roll(shift_S0,j,axis=1)            if np.allclose(shift_S,T):                return "Yes"     return "No"def fun(e):    if e =="#":        return 0    else:        return 1def input_func(N):    arr = []    for _ in range(N):        arr.append( list(input()) )        vfuc = np.vectorize(fun)    return vfuc(arr)def count0( arr ):    return np.count_nonzero(arr == 0 )if __name__ == "__main__":    N = int(input())        S = input_func(N)    T = input_func(N)    if count0(S) != count0(T):        print("No")        exit()    for i in range(4):        rot_S = np.rot90(S,i)        result = check(N,rot_S,T)        if result == "Yes":            break        print(result)