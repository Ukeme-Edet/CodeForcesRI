/**
 * @file 1909b_maewm.cpp
 * @author Ukeme Edet (ukemeedet2207@gmail.com)
 * @brief The solution to the problem Make Almost Equal With Mod
 * (https://codeforces.com/problemset/problem/1909/B)
 * @version 0.1
 * @date 2025-11-12
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
    ll t, n, d;
    vector<ll> a;
    unordered_set<ll> ds;

    cin >> t;
    while (t--) {
        cin >> n, a.resize(n), d = 1, ds.clear();
        for (auto &ai : a)
            cin >> ai;
        while (ds.size() != 2) {
            ds.clear(), d <<= 1;
            for (const auto &ai : a)
                ds.insert(ai % d);
        }
        cout << d << '\n';
    }
    return (EXIT_SUCCESS);
}