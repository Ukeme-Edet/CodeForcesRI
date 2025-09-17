"""
@file: abc423d_lw.py
@author: Ukeme Edet (ukemeedet2207@gmail.com)
@brief: The solution to the problem Long Waiting(https://atcoder.jp/contests/abc423/tasks/abc423_d)
@version: 1.0
@date: 2025-09-17

@copyright: Copyright (c) 2025
"""
from heapq import heappop, heappush
from sys import stdin, stdout


def input():
    return stdin.readline().strip()


def print(*args, sep=" ", end="\n"):
    return stdout.write(sep.join(str(x) for x in args) + end)


def main():
    n, k = [int(x) for x in input().split()]
    ct = cc = 0
    in_rest = []
    for _ in range(n):
        a, b, c = [int(x) for x in input().split()]
        while cc + c > k and in_rest:
            et, cc_ = heappop(in_rest)
            cc -= cc_
            ct = max(ct, et)
        ct = max(ct, a)
        print(ct)
        heappush(in_rest, (b + ct, c))
        cc += c


if __name__ == "__main__":
    main()
