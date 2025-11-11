/**
 * @file 1914c_quests.cpp
 * @author Ukeme Edet (ukemeedet2207@gmail.com)
 * @brief The solution to the problem Quests
 * (https://codeforces.com/problemset/problem/1914/C)
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
    ll t, n, k, i, res, cs, cm;
    vector<ll> a, b;

    cin >> t;
    while (t--) {
        cin >> n >> k, a.resize(n), b.resize(n);
        for (auto &ai : a)
            cin >> ai;
        for (auto &bi : b)
            cin >> bi;
        res = cs = cm = 0;
        for (i = 0; i < n; i++) {
            if (i >= k)
                break;
            cm = max(cm, b[i]);
            cs += a[i];
            res = max(res, cs + cm * (k - i - 1));
        }
        cout << res << '\n';
    }
    return (EXIT_SUCCESS);
}