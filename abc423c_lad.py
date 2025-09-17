"""
@file: abc423c_lad.py
@author: Ukeme Edet (ukemeedet2207@gmail.com)
@brief: The solution to the problem Lock All Doors(https://atcoder.jp/contests/abc423/tasks/abc423_c)
@version: 1.0
@date: 2025-09-17

@copyright: Copyright (c) 2025
"""
from sys import stdin, stdout


def input():
    return stdin.readline().strip()


def print(*args, sep=" ", end="\n"):
    return stdout.write(sep.join(str(x) for x in args) + end)


def main():
    n, r = [int(x) for x in input().split()]
    l = [int(x) for x in input().split()]
    res = 0
    if 0 in l[:r]:
        res += l[:r].count(0) + l[l.index(0, 0, r) : r].count(1) * 2
    if 0 in l[r:]:
        res += l[r:].count(0) + l[r : n - l[::-1].index(0) - 1].count(1) * 2
    print(res)


if __name__ == "__main__":
    main()
