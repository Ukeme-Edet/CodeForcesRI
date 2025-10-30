"""
@file: 2145c_.py
@author: Ukeme Edet (ukemeedet2207@gmail.com)
@brief: The solution to the problem Monocarp's String(https://codeforces.com/contest/2145/problem/C)
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
        s = input()
        if s.count("a") == s.count("b"):
            print(0)
            continue
        pv, sv = [0] * (n + 1), [0] * (n + 1)
        for i in range(n):
            pv[i + 1] = pv[i] + (1 if s[i] == "a" else -1)
            sv[n - i - 1] = sv[n - i] + (1 if s[n - i - 1] == "a" else -1)
        ls, res = {}, float("inf")
        for i in range(n + 1):
            if -sv[i] in ls:
                res = min(res, i - ls[-sv[i]])
            ls[pv[i]] = i
        print(res if res != n else -1)


if __name__ == "__main__":
    main()
