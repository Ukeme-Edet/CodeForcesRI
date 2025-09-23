"""
@file: 2124c_sm.py
@author: Ukeme Edet (ukemeedet2207@gmail.com)
@brief: The solution to the problem Subset Multiplication(https://codeforces.com/contest/2124/problem/C)
@version: 1.0
@date: 2025-09-23

@copyright: Copyright (c) 2025
"""

from math import gcd, lcm
from sys import stdin, stdout


def input():
    return stdin.readline().strip()


def print(*args, sep=" ", end="\n"):
    return stdout.write(sep.join(str(x) for x in args) + end)


def main():
    for _ in range(int(input())):
        n = int(input())
        b = [int(x) for x in input().split()]
        d = set()

        for i in range(n - 1):
            if b[i + 1] % b[i]:
                d.add(b[i] // gcd(b[i], b[i + 1]))

        print(lcm(*d) if d else 1)


if __name__ == "__main__":
    main()
