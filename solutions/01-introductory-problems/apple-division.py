# https://cses.fi/problemset/task/1623

def sol(c: list[int], diff: int=0) -> int:
    if not c:
        return diff

    return min([abs(sol(c[1:], diff-c[0])),
                abs(sol(c[1:], diff+c[0]))])


n = int(input())
arr=list(map(int, input().split(" ")))

print(sol(arr))