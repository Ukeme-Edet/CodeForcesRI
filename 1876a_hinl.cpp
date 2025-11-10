/**
 * @file 1876a_hinl.cpp
 * @author Ukeme Edet (ukemeedet2207@gmail.com)
 * @brief The solution to the problem Helmets in Night Light
 * (https://codeforces.com/problemset/problem/1876/A)
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
    ll t, n, p, res;
    vector<pair<ll, ll>> a;

    cin >> t;
    while (t--) {
        cin >> n >> p;
        a.resize(n);
        res = p, n--;
        for (auto &[_, pp] : a)
            cin >> pp;
        for (auto &[c, _] : a)
            cin >> c;
        sort(a.begin(), a.end());
        for (const auto &[c, pp] : a) {
            if (c >= p || n < 1)
                break;
            res += c * min(pp, n);
            n -= min(pp, n);
        }
        res += p * n;
        cout << res << '\n';
    }
    return (EXIT_SUCCESS);
}