/**
 * @file 1840c_sr.cpp
 * @author Ukeme Edet (ukemeedet2207@gmail.com)
 * @brief The solution to the problem Ski Resort
 * (https://codeforces.com/problemset/problem/1840/C)
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
    ll t, n, k, q, res, cd, i;
    vector<ll> a;

    cin >> t;
    while (t--) {
        cin >> n >> k >> q;
        a.resize(n);
        for (auto &ai : a)
            cin >> ai;
        cd = a[0] <= q;
        res = k == 1 && cd;
        for (i = 1; i < n; i++) {
            cd = (a[i - 1] <= q && a[i] <= q) ? cd + 1 : a[i] <= q;
            res += max(0ll, cd - k + 1);
        }
        cout << res << '\n';
    }
    return (EXIT_SUCCESS);
}