s = input()
t = input()

s_d = sorted(list(s))
t_d = sorted(list(t))[::-1]
if s_d < t_d:
    print("Yes")
else:
    print("No")

