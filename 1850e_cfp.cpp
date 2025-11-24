/**
 * @file 1850e_cfp.cpp
 * @author Ukeme Edet (ukemeedet2207@gmail.com)
 * @brief The solution to the problem Cardboard for Pictures
 * (https://codeforces.com/problemset/problem/1850/E)
 * @version 0.1
 * @date 2025-11-24
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <bits/stdc++.h>

#define ll unsigned long long

using namespace std;

/**
 * @brief Calculates sum of squares of (si + 2*w) for all elements.
 *
 * @param w Width value
 * @param s Vector of values
 * @return ll Sum of (si + 2*w)^2
 */
ll cb_used(ll w, vector<ll> &s) {
    ll cb = 0;
    for (const auto &si : s)
        cb += (si + 2 * w) * (si + 2 * w);
    return cb;
}

/**
 * @brief The main function
 *
 * @return int
 */
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t, n, c, l, r, m;
    vector<ll> s;

    cin >> t;
    while (t--) {
        cin >> n >> c;
        s.resize(n);
        for (auto &si : s)
            cin >> si;
        l = 0, r = sqrt(10e18 / n) + 1;
        while (l < r) {
            m = l + (r - l) / 2;
            if (cb_used(m, s) < c)
                l = m + 1;
            else
                r = m;
        }
        cout << l << '\n';
    }
    return (EXIT_SUCCESS);
}
