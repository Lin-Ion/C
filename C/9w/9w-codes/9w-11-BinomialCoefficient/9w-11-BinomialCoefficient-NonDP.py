import time


def rec(n, k):
    if k == 0 or n == k:
        return 1

    return rec(n-1,k-1)+rec(n-1,k)


# main
n = int(input("n= "))
k = int(input("k= "))

t1 = time.time()
print(f'결과: {rec(n, k)}')
t2 = time.time()
print(f'소요시간:{t2-t1} sec')