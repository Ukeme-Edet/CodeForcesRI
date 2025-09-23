"""
@file: 2137c_mes.py
@author: Ukeme Edet (ukemeedet2207@gmail.com)
@brief: The solution to the problem Maximum Even Sum(https://codeforces.com/contest/2137/problem/C)
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
        a, b = [int(x) for x in input().split()]
        if a % 2 == 1 and b % 2 == 1:
            print(a * b + 1)
        elif b % 2 == 0 and (b % 4 == 0 or a % 2 == 0):
            print((a * b) // 2 + 2)
        else:
            print(-1)


if __name__ == "__main__":
    main()
