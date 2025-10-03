"""
@file: abc425d_uwa.py
@author: Ukeme Edet (ukemeedet2207@gmail.com)
@brief: The solution to the problem Ulam-Warburton Automaton (https://atcoder.jp/contests/abc425/tasks/abc425_d)
@version: 1.0
@date: 2025-10-03

@copyright: Copyright (c) 2025
"""

from collections import deque
from sys import stdin, stdout


def input():
    return stdin.readline().strip()


def print(*args, sep=" ", end="\n"):
    return stdout.write(sep.join(str(x) for x in args) + end)


def main():
    h, w = [int(x) for x in input().split()]
    s = [list(input()) for _ in range(h)]
    bnc = [[0] * w for _ in range(h)]
    vis = [[False] * w for _ in range(h)]
    jobs = deque()
    bc = sum(row.count("#") for row in s)
    for i in range(h):
        for j in range(w):
            if s[i][j] == ".":
                bnc[i][j] = sum(
                    s[x][y] == "#"
                    for x, y in [
                        (i - 1, j),
                        (i + 1, j),
                        (i, j - 1),
                        (i, j + 1),
                    ]
                    if 0 <= x < h and 0 <= y < w
                )
            if bnc[i][j] == 1:
                vis[i][j] = True
                jobs.append((i, j))
    while jobs:
        next_jobs_pre, next_jobs_post = deque(), deque()
        while jobs:
            i, j = jobs.popleft()
            bc += 1
            s[i][j] = "#"
            for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
                nx, ny = i + dx, j + dy
                if 0 <= nx < h and 0 <= ny < w and s[nx][ny] == ".":
                    bnc[nx][ny] += 1
                    if bnc[nx][ny] == 1 and not vis[nx][ny]:
                        vis[nx][ny] = True
                        next_jobs_pre.append((nx, ny))
        while next_jobs_pre:
            i, j = next_jobs_pre.popleft()
            if bnc[i][j] == 1:
                next_jobs_post.append((i, j))
        jobs = next_jobs_post
    print(bc)


if __name__ == "__main__":
    main()
