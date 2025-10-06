"""
@file: usaco2012s_2hs.py
@author: Ukeme Edet (ukemeedet2207@gmail.com)
@brief: The solution to the problem Haybale Stacking(http://www.usaco.org/index.php?page=viewproblem2&cpid=1041)
@version: 1.0
@date: 2025-10-06

@copyright: Copyright (c) 2025
"""

from sys import stdin, stdout

stdin = open("stacking.in", "r")
stdout = open("stacking.out", "w")


def input():
    return stdin.readline().strip()


def print(*args, sep=" ", end="\n"):
    return stdout.write(sep.join(str(x) for x in args) + end)


def main():
    n, k = [int(x) for x in input().split()]
    sq = [0] * (n + 1)
    for _ in range(k):
        a, b = [int(x) for x in input().split()]
        sq[a - 1] += 1
        sq[b] -= 1
    st = [0] * (n + 1)
    st[0] = sq[0]
    for i in range(1, n + 1):
        st[i] = st[i - 1] + sq[i - 1]
    st.sort()
    print(st[n // 2])


if __name__ == "__main__":
    main()
