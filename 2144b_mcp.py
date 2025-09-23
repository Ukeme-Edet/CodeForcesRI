"""
@file: 2144b_mcp.py
@author: Ukeme Edet (ukemeedet2207@gmail.com)
@brief: The solution to the problem
@version: 1.0
@date: 2025-09-15

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
        fm = [0] * (n + 1)
        for i in range(n):
            fm[p[i]] += 1
        da = []
        for i in range(1, n + 1):
            if fm[i] == 0:
                da.append(i)
        j = 0
        for i in range(n):
            if p[i] == 0:
                p[i] = da[-j - 1]
                j += 1
        l, r = 0, n - 1
        while l < n:
            if p[l] != l + 1:
                break
            l += 1
        while r >= 0:
            if p[r] != r + 1:
                break
            r -= 1
        print(max(0, r - l + 1))


if __name__ == "__main__":
    main()
