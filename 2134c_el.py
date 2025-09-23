"""
@file: 2134c_el.py
@author: Ukeme Edet (ukemeedet2207@gmail.com)
@brief: The solution to the problem Even Larger(https://codeforces.com/contest/2134/problem/C)
@version: 1.0
@date: 2025-09-23

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
        a = [int(x) for x in input().split()]
        res = 0

        for i in range(1, n, 2):
            if a[i - 1] > a[i]:
                res += a[i - 1] - a[i]
                a[i - 1] = a[i]
            if i + 1 < n and a[i + 1] > a[i]:
                res += a[i + 1] - a[i]
                a[i + 1] = a[i]
            lrd = a[i - 1] + (a[i + 1] if i + 1 < n else 0)
            if lrd > a[i]:
                res += lrd - a[i]
                if i + 1 < n:
                    a[i + 1] -= max(0, lrd - a[i])

        print(res)


if __name__ == "__main__":
    main()
