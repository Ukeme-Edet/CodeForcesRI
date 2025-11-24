/**
 * @file 1826d_rm.cpp
 * @author Ukeme Edet (ukemeedet2207@gmail.com)
 * @brief The solution to the problem Running Miles
 * (https://codeforces.com/contest/1826/problem/D)
 * @version 0.1
 * @date 2025-10-30
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
    ll t, n, i, res;
    vector<ll> b, px, sx;

    cin >> t;
    while (t--) {
        cin >> n;
        b.resize(n), px.resize(n + 1), sx.resize(n + 1);
        px[0] = sx[n] = LLONG_MIN;
        for (auto &bi : b)
            cin >> bi;
        for (i = 0; i < n; i++) {
            px[i + 1] = max(px[i], b[i] + i + 1);
            sx[n - i - 1] = max(sx[n - i], b[n - i - 1] - n + i);
        }
        res = 0;
        for (i = 0; i < n; i++)
            res = max(res, b[i] + px[i] + sx[i + 1]);
        cout << res << '\n';
    }
    return (EXIT_SUCCESS);
}