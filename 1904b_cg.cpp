/**
 * @file 1904b_cg.cpp
 * @author Ukeme Edet (ukemeedet2207@gmail.com)
 * @brief The solution to the problem Collecting Game
 * (https://codeforces.com/problemset/problem/1904/B)
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
    ll t, n, cs, i, j;
    vector<ll> res;
    vector<pair<ll, ll>> a;

    cin >> t;
    while (t--) {
        cin >> n, i = j = cs = 0, a.resize(n), res.resize(n);
        for (auto &ai : a)
            cin >> ai.first, ai.second = i++;
        sort(a.begin(), a.end());
        for (i = 0; i < n; i++) {
            if (i == j)
                cs += a[j++].first;
            while (j < n && a[j].first <= cs)
                cs += a[j++].first;
            res[a[i].second] = j - 1;
        }
        for (const auto &x : res)
            cout << x << ' ';
        cout << '\n';
    }
    return (EXIT_SUCCESS);
}