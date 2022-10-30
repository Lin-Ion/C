import time


def rec(n, k):
    if k == 0 or n == k:
        return 1

    if m[n][k]:
        return m[n][k]

    m[n][k] = rec(n-1, k-1)+rec(n-1, k)
    return m[n][k]


# main
n = int(input("n= "))
k = int(input("k= "))

m = [[0 for _ in range(k+1)]for _ in range(n+1)]

t1 = time.time()
print(f'결과: {rec(n, k)}')
t2 = time.time()
print(f'소요시간:{t2-t1} sec')
