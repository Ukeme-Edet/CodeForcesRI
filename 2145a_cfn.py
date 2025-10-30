"""
@file: 2145a_.py
@author: Ukeme Edet (ukemeedet2207@gmail.com)
@brief: The solution to the problem Candies for Nephews(https://codeforces.com/contest/2145/problem/A)
@version: 1.0
@date: 2025-10-06

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
        print(3 - n % 3 if n % 3 != 0 else 0)


if __name__ == "__main__":
    main()
