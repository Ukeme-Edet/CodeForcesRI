"""
@file: 2127b_hhh.py
@author: Ukeme Edet (ukemeedet2207@gmail.com)
@brief: The solution to the problem Hamiiid, Haaamid... Hamid?(https://codeforces.com/problemset/problem/2127/B)
@version: 1.0
@date: 2025-09-17

@copyright: Copyright (c) 2025
"""
from sys import stdin, stdout


def input():
    return stdin.readline().strip()


def print(*args, sep=" ", end="\n"):
    return stdout.write(sep.join(str(x) for x in args) + end)


def main():
    for _ in range(int(input())):
        n, x = [int(x) for x in input().split()]
        s = input()
        if "#" not in s or x == 1 or x == n:
            print(1)
            continue
        # Box-in
        if s[x - 2] == "#" or s[x] == "#":
            print(min(x - 1, n - x) + 1)
        else:
            print(
                min(
                    max(
                        x
                        - 1
                        - (s[: x - 1][::-1].index("#") if "#" in s[: x - 1] else x - 1),
                        n - x - (s[x:].index("#") if "#" in s[x:] else n - x)
                    ),
                    min(n - x, x - 1),
                )
                + 1
            )


if __name__ == "__main__":
    main()
