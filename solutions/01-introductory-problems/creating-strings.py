# https://cses.fi/problemset/task/1622
from itertools import permutations

arr=sorted(set("".join(p) for p in permutations(input())))
print(len(arr))
for str in arr:
    print(str)