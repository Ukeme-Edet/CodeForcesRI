/**
 * @file 1873e_baa.cpp
 * @author Ukeme Edet (ukemeedet2207@gmail.com)
 * @brief The solution to the problem Building an Aquarium
 * (https://codeforces.com/problemset/problem/1873/E)
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
 * @brief Calculates total water needed to fill containers to height h.
 *
 * @param h Target height for all containers
 * @param a Current heights of each container
 * @return Total water needed
 */

ll water_used(ll h, vector<ll> &a) {
    ll wu = 0;

    for (const auto &ai : a)
        wu += max(h - ai, 0ll);

    return wu;
}

/**
 * @brief The main function
 *
 * @return int
 */
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t, n, x, l, r, m;
    vector<ll> a;

    cin >> t;
    while (t--) {
        cin >> n >> x;
        a.resize(n);
        for (auto &ai : a)
            cin >> ai;
        l = 0, r = 10e9 + 1;
        while (l < r) {
            m = l + (r - l) / 2;
            if (water_used(m, a) <= x)
                l = m + 1;
            else
                r = m;
        }
        cout << l - 1 << '\n';
    }
    return (EXIT_SUCCESS);
}