"""
@file: g103886e_jp.py
@author: Ukeme Edet (ukemeedet2207@gmail.com)
@brief: The solution to the problem Jeopardized Projects(https://codeforces.com/problemset/problem/1038/E)
@version: 1.0
@date: 2025-10-06

@copyright: Copyright (c) 2025
"""

from sys import stdin, stdout


MOD = 10**9 + 7


def input():
    return stdin.readline().strip()


def print(*args, sep=" ", end="\n"):
    return stdout.write(sep.join(str(x) for x in args) + end)


def main():
    pv = [0] * 100002
    exp = [1] * 100002
    for i in range(1, 100002):
        exp[i] = (exp[i - 1] * 2) % MOD
        pv[i] = (pv[i - 1] + exp[i - 1] - exp[i // 2]) % MOD
    for _ in range(int(input())):
        l, r = [int(x) for x in input().split()]
        print((pv[r] - pv[l - 1]) % MOD)


if __name__ == "__main__":
    main()
