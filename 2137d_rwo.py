"""
@file: 2137d_rwo.py
@author: Ukeme Edet (ukemeedet2207@gmail.com)
@brief: The solution to the problem Replace with Occurrences(https://codeforces.com/contest/2137/problem/D)
@version: 1.0
@date: 2025-09-11

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
        b = [int(x) for x in input().split()]
        fm = [0] * (n + 1)
        for i in b:
            fm[i] += 1
        if any(fm[i] % i for i in range(1, n + 1)):
            print(-1)
            continue
        cn = [0] * (n + 1)
        dn = [0] * (n + 1)
        res = [0] * n
        curr = 0
        for i in range(n):
            if not dn[b[i]] % b[i]:
                curr += 1
                cn[b[i]] = curr
            dn[b[i]] += 1
            res[i] = cn[b[i]]
        print(*res)


if __name__ == "__main__":
    main()
