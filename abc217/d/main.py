L,Q = map(int,input().split())query_arr = []for _ in range(Q):    c,x = map(int,input().split())    query_arr.append([c,x])wood = [ i+1 for i in range(L)]def split_num( wood, n ):    count = wood.count(n)    if count == 0:        return [wood]    woods = [[] for i in range(count+1)]    start_index = 0    for i in range(count):        zero_index = wood.index(n)        a_wood = wood[start_index:zero_index]        start_index = zero_index        woods[i] = a_wood    print(count, woods)    woods[count] = wood[zero_index+1:]    print(count, woods)    return woodsfor c,x in query_arr:    #print(c,x)    if c==1:        wood.insert(x,0)    else:        print(wood)        woods = split_num(wood,0)        print(woods)        if len(woods) == 1:            print(len(woods[0]))        else:            for i in woods:                if x in i:                    print(len(i))