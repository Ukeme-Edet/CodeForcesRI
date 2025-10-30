/**
 * @file ys_srs.cpp
 * @author Ukeme Edet (ukemeedet2207@gmail.com)
 * @brief The solution to the problem Static Range
 * Sum(https://judge.yosupo.jp/problem/static_range_sum)
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
    ll n, q, l, r, i;
    vector<ll> a, ps;

    cin >> n >> q;
    a.resize(n), ps.resize(n + 1);
    for (i = 0; i < n; i++) {
        cin >> a[i];
        ps[i + 1] = ps[i] + a[i];
    }
    while (q--) {
        cin >> l >> r;
        cout << ps[r] - ps[l] << '\n';
    }
    return (EXIT_SUCCESS);
}