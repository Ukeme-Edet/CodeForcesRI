"""
@file: usaco2019s_2ptb.py
@author: Ukeme Edet (ukemeedet2207@gmail.com)
@brief: The solution to the problem Painting the Barn(http://www.usaco.org/index.php?page=viewproblem2&cpid=919)
@version: 1.0
@date: 2025-10-06

@copyright: Copyright (c) 2025
"""

from sys import stdin, stdout

stdin = open("paintbarn.in", "r")
stdout = open("paintbarn.out", "w")


def input():
    return stdin.readline().strip()


def print(*args, sep=" ", end="\n"):
    return stdout.write(sep.join(str(x) for x in args) + end)


def main():
    n, k = [int(x) for x in input().split()]
    ps = [[0] * 1002 for _ in range(1002)]
    for _ in range(n):
        x1, y1, x2, y2 = [int(x) for x in input().split()]
        ps[x1 + 1][y1 + 1] += 1
        ps[x1 + 1][y2 + 1] -= 1
        ps[x2 + 1][y1 + 1] -= 1
        ps[x2 + 1][y2 + 1] += 1
    pm = [[0] * 1002 for _ in range(1002)]
    for i in range(1, 1002):
        for j in range(1, 1002):
            pm[i][j] = (
                ps[i][j] + pm[i - 1][j] + pm[i][j - 1] - pm[i - 1][j - 1]
            )
    res = 0
    for i in range(1, 1002):
        for j in range(1, 1002):
            res += pm[i][j] == k
    print(res)


if __name__ == "__main__":
    main()
