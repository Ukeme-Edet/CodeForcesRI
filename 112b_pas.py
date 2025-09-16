"""
@file: 112b_pas.py
@author: Ukeme Edet (ukemeedet2207@gmail.com)
@brief: The solution to the problem Petya and Square(https://codeforces.com/problemset/problem/112/B)
@version: 1.0
@date: 2025-09-16

@copyright: Copyright (c) 2025
"""

from sys import stdin, stdout


def input():
    return stdin.readline().strip()


def print(*args, sep=" ", end="\n"):
    return stdout.write(sep.join(str(x) for x in args) + end)


def main():
    n, x, y = [int(i) for i in input().split()]
    x = n - x + 1 if x > n // 2 else x
    y = n - y + 1 if y > n // 2 else y
    print("YES" if (x != n // 2 or y != n // 2) else "NO")


if __name__ == "__main__":
    main()
