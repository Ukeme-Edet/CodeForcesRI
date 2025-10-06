"""
@file: ks2020cd_candies.py
@author: Ukeme Edet (ukemeedet2207@gmail.com)
@brief: The solution to the problem Candies Test Set 1(https://zibada.guru/gcj/ks2020c/problems/#D)
@version: 1.0
@date: 2025-10-06

@copyright: Copyright (c) 2025
"""

from sys import stdin, stdout


def input():
    return stdin.readline().strip()


def print(*args, sep=" ", end="\n"):
    return stdout.write(sep.join(str(x) for x in args) + end)


def gen_ps(a):
    ps = [0] * (len(a) + 1)
    psx = [0] * (len(a) + 1)
    for i in range(1, len(a) + 1):
        ps[i] = ps[i - 1] + a[i - 1] * i * (1 if i % 2 else -1)
        psx[i] = psx[i - 1] + a[i - 1] * (1 if i % 2 else -1)
    return ps, psx


def main():
    for i in range(int(input())):
        n, q = [int(x) for x in input().split()]
        a = [int(x) for x in input().split()]
        ps, psx = gen_ps(a)
        res = 0
        for _ in range(q):
            t, x, y = input().split()
            x, y = int(x), int(y)
            if t == "U":
                a[x - 1] = y
                ps, psx = gen_ps(a)
            else:
                res += (
                    ps[y] - ps[x - 1] - (psx[y] - psx[x - 1]) * (x - 1)
                ) * (1 if x % 2 else -1)
        print(f"Case #{i + 1}: {res}")


if __name__ == "__main__":
    main()
