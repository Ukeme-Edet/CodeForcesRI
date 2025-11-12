/**
 * @file 1891b_dv.cpp
 * @author Ukeme Edet (ukemeedet2207@gmail.com)
 * @brief The solution to the problem Deja Vu
 * (https://codeforces.com/problemset/problem/1891/B)
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
    ll t, n, q;
    vector<ll> a, x;
    unordered_set<ll> done;

    cin >> t;
    while (t--) {
        cin >> n >> q, a.resize(n), x.resize(q), done.clear();
        for (auto &ai : a)
            cin >> ai;
        for (auto &xi : x)
            cin >> xi;
        for (const auto &xi : x) {
            if (done.find(xi) != done.end())
                continue;
            done.insert(xi);
            for (auto &ai : a)
                if (ai % (1 << xi) == 0)
                    ai += (1 << (xi - 1));
        }
        for (const auto &ai : a)
            cout << ai << ' ';
        cout << '\n';
    }
    return (EXIT_SUCCESS);
}