/**
 * @file 1914d_ta.cpp
 * @author Ukeme Edet (ukemeedet2207@gmail.com)
 * @brief The solution to the problem Three Activities
 * (https://codeforces.com/problemset/problem/1914/D)
 * @version 0.1
 * @date 2025-11-01
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
    ll t, n, res, i, j, k;
    vector<pair<ll, ll>> a, b, c;

    cin >> t;
    while (t--) {
        cin >> n;
        a.resize(n), b.resize(n), c.resize(n);
        for (i = 0; i < n; i++) {
            cin >> a[i].first;
            a[i].second = i;
        }
        for (i = 0; i < n; i++) {
            cin >> b[i].first;
            b[i].second = i;
        }
        for (i = 0; i < n; i++) {
            cin >> c[i].first;
            c[i].second = i;
        }
        res = 0;
        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());
        sort(c.rbegin(), c.rend());
        for (i = 0; i < 3; i++)
            for (j = 0; j < 3; j++)
                for (k = 0; k < 3; k++)
                    if (a[i].second != b[j].second &&
                        a[i].second != c[k].second &&
                        b[j].second != c[k].second)
                        res = max(res, a[i].first + b[j].first + c[k].first);
        cout << res << '\n';
    }
    return (EXIT_SUCCESS);
}