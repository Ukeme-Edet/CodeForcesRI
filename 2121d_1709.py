"""
@file: 2121d_1709.py
@author: Ukeme Edet (ukemeedet2207@gmail.com)
@brief: The solution to the problem 1709(https://codeforces.com/problemset/problem/2121/D)
@version: 1.0
@date: 2025-09-25

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
        b = [int(x) for x in input().split()]
        ops = []
        mn = [[1, 1], [2, n + 1]]

        # Bubble sort to ensure sorted arrays
        for i in range(n):
            for j in range(n - 1, i, -1):
                if a[j] < a[j - 1]:
                    ops.append((1, j))
                    a[j], a[j - 1] = a[j - 1], a[j]
                if b[j] < b[j - 1]:
                    ops.append((2, j))
                    b[j], b[j - 1] = b[j - 1], b[j]

        for i in range(n):
            j = i
            while (
                j < n
                and not mn[0][0] <= a[j] <= mn[0][1]
                and not mn[0][0] <= b[j] <= mn[0][1]
            ):
                j += 1
            if (
                j < n
                and not mn[0][0] <= a[j] <= mn[0][1]
                and mn[0][0] <= b[j] <= mn[0][1]
            ):
                ops.append((3, j + 1))
                a[j], b[j] = b[j], a[j]
            j = i
            while (
                j < n
                and not mn[1][0] <= a[j] <= mn[1][1]
                and not mn[1][0] <= b[j] <= mn[1][1]
            ):
                j += 1
            if (
                j < n
                and not mn[1][0] <= b[j] <= mn[1][1]
                and mn[1][0] <= a[j] <= mn[1][1]
            ):
                ops.append((3, j + 1))
                a[j], b[j] = b[j], a[j]
            mn[0][0] += 1
            mn[0][1] += 2
            mn[1][0] += 2
            mn[1][1] += 1

        print(len(ops))
        for op in ops:
            print(*op)


if __name__ == "__main__":
    main()
