# https://cses.fi/problemset/task/1755
from collections import Counter

c = Counter(input())
r=[]
odd_string=""

for char,count in c.items():
    if count & 1:
        if not odd_string:
            odd_string=char*count
        else:
            print("NO SOLUTION")
            exit(0)
    else:
        r.append(char*(count//2))

print("".join(r)+odd_string+"".join(reversed(r)))
