/**
 * @file 1857c_avm.cpp
 * @author Ukeme Edet (ukemeedet2207@gmail.com)
 * @brief The solution to the problem Assembly via Minimums
 * (https://codeforces.com/problemset/problem/1857/C)
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
    ll t, n, i, x, nt;
    vector<ll> a;
    map<ll, ll> bm;

    cin >> t;
    while (t--) {
        cin >> n, bm.clear();
        a.resize(n);
        for (i = 0; i < n * (n - 1) / 2; i++) {
            cin >> x;
            bm[x]++;
        }
        nt = 0;
        auto kv = bm.begin();
        for (i = 0; i < n; i++) {
            nt++;
            if (kv != bm.end()) {
                a[i] = kv->first;
                if (nt * (n - i - 1) + nt * (nt - 1) / 2 == kv->second)
                    nt = 0, kv = next(kv);
            } else
                a[i] = a[i - 1];
        }
        for (const auto &ai : a)
            cout << ai << ' ';
        cout << '\n';
    }
    return (EXIT_SUCCESS);
}