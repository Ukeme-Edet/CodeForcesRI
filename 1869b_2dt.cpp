/**
 * @file 1869b_2dt.cpp
 * @author Ukeme Edet (ukemeedet2207@gmail.com)
 * @brief The solution to the problem 2D Traveling
 * (https://codeforces.com/problemset/problem/1869/B)
 * @version 0.1
 * @date 2025-11-24
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
    ll t, n, k, a, b, ad, bd, abd, i;
    vector<pair<ll, ll>> ct;

    cin >> t;
    while (t--) {
        cin >> n >> k >> a >> b;
        ct.resize(n);
        for (auto &ci : ct)
            cin >> ci.first >> ci.second;
        ad = bd = abd = LLONG_MAX / 2;
        for (i = 0; i < k; i++) {
            ad = min(ad, abs(ct[a - 1].first - ct[i].first) +
                             abs(ct[a - 1].second - ct[i].second));
            bd = min(bd, abs(ct[b - 1].first - ct[i].first) +
                             abs(ct[b - 1].second - ct[i].second));
        }
        abd = abs(ct[a - 1].first - ct[b - 1].first) +
              abs(ct[a - 1].second - ct[b - 1].second);
        cout << min(abd, ad + bd) << '\n';
    }
    return (EXIT_SUCCESS);
}