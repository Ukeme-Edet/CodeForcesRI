"""
@file: 2134b_a0ok.py
@author: Ukeme Edet (ukemeedet2207@gmail.com)
@brief: The solution to the problem Add 0 or K(https://codeforces.com/problemset/problem/2134/B)
@version: 1.0
@date: 2025-09-24

@copyright: Copyright (c) 2025
"""

from collections import defaultdict
from sys import stdin, stdout


def input():
    return stdin.readline().strip()


def print(*args, sep=" ", end="\n"):
    return stdout.write(sep.join(str(x) for x in args) + end)


def get_primes(x):
    is_prime = [True] * (x + 1)
    is_prime[0] = is_prime[1] = False
    for i in range(2, x + 1):
        if is_prime[i]:
            for j in range(i * i, x + 1, i):
                is_prime[j] = False
    return [i for i in range(2, x + 1) if is_prime[i]]


def main():
    primes = get_primes(int(10**4.5) + 10)
    for _ in range(int(input())):
        n, k = [int(x) for x in input().split()]
        a = [int(x) for x in input().split()]

        for prime in primes:
            spt = defaultdict(lambda: float("inf"))
            cv = st = 0
            while str(cv) not in spt:
                spt[str(cv)] = st
                cv = (cv + k) % prime
                st += 1
            if (
                max(
                    [spt[str(prime - num % prime)] for num in a if num % prime],
                    default=0,
                )
                <= k
            ):
                for num in a:
                    print(
                        num + spt[str(prime - num % prime)] * k if num % prime else num,
                        end=" ",
                    )
                print()
                break


if __name__ == "__main__":
    main()
