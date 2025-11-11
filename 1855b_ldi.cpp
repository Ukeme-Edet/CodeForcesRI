/**
 * @file 1855b_ldi.cpp
 * @author Ukeme Edet (ukemeedet2207@gmail.com)
 * @brief The solution to the problem Longest Divisors Interval
 * (https://codeforces.com/problemset/problem/1855/B)
 * @version 0.1
 * @date 2025-11-11
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <bits/stdc++.h>

#define ll long long

using namespace std;

/**
 * @brief The main function
 *
 * @return int
 */
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t, n, res, i;

    cin >> t;
    while (t--) {
        cin >> n, i = 1, res = 0;
        while (n % i == 0)
            i++, res++;
        cout << res << '\n';
    }
    return (EXIT_SUCCESS);
}