"""
@file: arc206a_rr.py
@author: Ukeme Edet (ukemeedet2207@gmail.com)
@brief: The solution to the problem Range Replace(https://atcoder.jp/contests/arc206/tasks/arc206_a)
@version: 1.0
@date: 2025-09-23

@copyright: Copyright (c) 2025
"""

from collections import defaultdict
from sys import stdin, stdout


def input():
    return stdin.readline().strip()


def print(*args, sep=" ", end="\n"):
    return stdout.write(sep.join(str(x) for x in args) + end)


def main():
    n = int(input())
    a = [int(x) for x in input().split()]
    fm = defaultdict(int)
    res, i = 1, n - 1

    while i >= 0:
        fm[a[i]] += 1
        res += (n - i) - fm[a[i]]
        i -= 1
        while i >= 0 and a[i] == a[i + 1]:
            fm[a[i]] += 1
            i -= 1
    print(res)


if __name__ == "__main__":
    main()
