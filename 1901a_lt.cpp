/**
 * @file 1901a_lt.cpp
 * @author Ukeme Edet (ukemeedet2207@gmail.com)
 * @brief The solution to the problem Line Trip
 * (https://codeforces.com/problemset/problem/1901/A)
 * @version 0.1
 * @date 2025-11-10
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
    ll t, n, x, c, p, i, res;

    cin >> t;
    while (t--) {
        cin >> n >> x;
        p = res = 0;
        for (i = 0; i < n; i++) {
            cin >> c;
            res = max(res, c - p);
            p = c;
        }
        res = max(res, (x - p) * 2);
        cout << res << '\n';
    }
    return (EXIT_SUCCESS);
}