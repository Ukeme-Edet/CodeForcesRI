"""
@file: B_Coins.py
@author: Ukeme Edet (ukemeedet2207@gmail.com)
@brief: The solution to the problem Coins
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
    n = int(input())
    cn = n
    while cn != 1:
        print(cn, end=" ")
        for i in range(2, cn + 1):
            if cn % i == 0:
                cn //= i
                break
    print(1)


if __name__ == "__main__":
    main()
