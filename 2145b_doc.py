"""
@file: 2145b_.py
@author: Ukeme Edet (ukemeedet2207@gmail.com)
@brief: The solution to the problem Deck of Cards(https://codeforces.com/contest/2145/problem/B)
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
        n, k = [int(x) for x in input().split()]
        s = input()
        tpc, btc, boc = s.count("0"), s.count("1"), s.count("2")
        ft, en = "-" * tpc, "-" * btc
        mid = n - (tpc + btc)
        if boc == mid:
            bt = "-" * boc
        elif boc <= mid // 2:
            bt = "?" * boc + "+" * (mid - boc * 2) + "?" * boc
        else:
            bt = "?" * mid
        print(ft + bt + en)


if __name__ == "__main__":
    main()
