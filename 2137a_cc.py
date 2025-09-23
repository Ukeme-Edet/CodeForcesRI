"""
@file: 2137a_cc.py
@author: Ukeme Edet (ukemeedet2207@gmail.com)
@brief: The solution to the problem Collatz Conjecture(https://codeforces.com/contest/2137/problem/A)
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
        k, x = [int(x) for x in input().split()]
        for _ in range(k):
            if (
                x - 1 > 0
                and (x - 1) % 3 == 0
                and ((x - 1) // 3) % 2 == 1
                and (x - 1) // 3 > 1
            ):
                x = (x - 1) // 3
            else:
                x *= 2
        print(x)


if __name__ == "__main__":
    main()
