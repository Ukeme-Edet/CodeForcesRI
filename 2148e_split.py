"""
@file: 2148e_split.py
@author: Ukeme Edet (ukemeedet2207@gmail.com)
@brief: The solution to the problem
@version: 1.0
@date: 2025-09-16

@copyright: Copyright (c) 2025
"""

from collections import Counter, defaultdict
from sys import stdin, stdout


def input():
    return stdin.readline().strip()


def print(*args, sep=" ", end="\n"):
    return stdout.write(sep.join(str(x) for x in args) + end)


def main():
    for _ in range(int(input())):
        n, k = [int(x) for x in input().split()]
        a = [x for x in input().split()]
        fm = Counter(a)
        if any(v % k for v in fm.values()):
            print(0)
            continue
        cfm = defaultdict(int)
        res = 0
        l = r = 0
        while r < n:
            while l < r and cfm[a[r]] == fm[a[r]] // k:
                res += r - l
                cfm[a[l]] -= 1
                l += 1
            cfm[a[r]] += 1
            r += 1
        while l < n:
            res += n - l
            l += 1
        print(res)


if __name__ == "__main__":
    main()
