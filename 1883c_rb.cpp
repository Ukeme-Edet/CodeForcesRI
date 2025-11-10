/**
 * @file 1883c_rb.cpp
 * @author Ukeme Edet (ukemeedet2207@gmail.com)
 * @brief The solution to the problem Raspberries
 * (https://codeforces.com/problemset/problem/1883/C)
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
    ll t, n, k, res, c, i, res2;

    cin >> t;
    while (t--) {
        cin >> n >> k, res = LLONG_MAX, res2 = 0;
        for (i = 0; i < n; i++) {
            cin >> c;
            if (!(c % k))
                res = 0;
            res = min(res, k - c % k);
            if (k == 4)
                res2 += c % 2 == 0;
        }
        cout << (k == 4 ? min(res, max(0ll, 2 - res2)) : res) << '\n';
    }
    return (EXIT_SUCCESS);
}