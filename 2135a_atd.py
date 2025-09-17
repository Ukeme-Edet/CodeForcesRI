"""
@file: 2135a_atd.py
@author: Ukeme Edet (ukemeedet2207@gmail.com)
@brief: The solution to the problem Against the Difference(https://codeforces.com/problemset/problem/2135/A)
@version: 1.0
@date: 2025-09-17

@copyright: Copyright (c) 2025
"""
from collections import defaultdict, deque
from sys import stdin, stdout


def input():
    return stdin.readline().strip()


def print(*args, sep=" ", end="\n"):
    return stdout.write(sep.join(str(x) for x in args) + end)


def main():
    for _ in range(int(input())):
        n = int(input())
        a = input().split()
        dp = [0] * (n + 1)
        st, sr = defaultdict(deque), defaultdict(int)
        for i in range(n):
            if sr[a[i]] == 0:
                sr[a[i]] = int(a[i])
            sr[a[i]] -= 1
            st[a[i]].append(i)
            if sr[a[i]] == 0:
                dp[i + 1] = max(dp[i], int(a[i]) + dp[st[a[i]].popleft()])
                sr[a[i]] += 1
            else:
                dp[i + 1] = dp[i]
        print(dp[n])


if __name__ == "__main__":
    main()
