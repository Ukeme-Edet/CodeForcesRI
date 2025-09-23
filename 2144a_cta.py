"""
@file: 2144a_cta.py
@author: Ukeme Edet (ukemeedet2207@gmail.com)
@brief: The solution to the problem
@version: 1.0
@date: 2025-09-15

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
        a = [int(x) for x in input().split()]
        for i in range(n):
            for j in range(i + 1, n):
                sx = set(
                    [
                        sum(a[: i + 1]) % 3,
                        sum(a[i + 1 : j + 1]) % 3,
                        sum(a[j + 1 :]) % 3,
                    ]
                )
                if len(sx) == 3 or len(sx) == 1:
                    print(i + 1, j + 1)
                    break
            else:
                continue
            break
        else:
            print(0, 0)


if __name__ == "__main__":
    main()
