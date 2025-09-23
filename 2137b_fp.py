"""
@file: 2137b_fp.py
@author: Ukeme Edet (ukemeedet2207@gmail.com)
@brief: The solution to the problem Fun Permutation(https://codeforces.com/contest/2137/problem/B)
@version: 1.0
@date: 2025-09-07

@copyright: Copyright (c) 2025
"""

from sys import stdin, stdout


def input():
    return stdin.readline().strip()


def print(*args, sep=" ", end="\n"):
    return stdout.write(sep.join(str(x) for x in args) + end)


def main():
    for _ in range(int(input())):
        n = int(input())
        p = [int(x) for x in input().split()]
        ans = [n - p[i] + 1 for i in range(n)]
        print(*ans)


if __name__ == "__main__":
    main()
