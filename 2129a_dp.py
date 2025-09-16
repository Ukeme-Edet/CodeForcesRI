"""
@file: 2129a_dp.py
@author: Ukeme Edet (ukemeedet2207@gmail.com)
@brief: The solution to the problem Double Perspective(https://codeforces.com/problemset/problem/2129/A)
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
    for _ in range(int(input())):
        n = int(input())
        s = [[int(x) for x in input().split()] for _ in range(n)]
        us = [1] * n
        for i in range(n):
            for j in range(n):
                if i == j:
                    continue
                if s[j][0] <= s[i][0] and s[i][1] <= s[j][1]:
                    us[i] = 0
                    break
        print(sum(us))
        print(*[i + 1 for i in range(n) if us[i]])


if __name__ == "__main__":
    main()
