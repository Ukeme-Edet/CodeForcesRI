/**
 * @file 1831b_am.cpp
 * @author Ukeme Edet (ukemeedet2207@gmail.com)
 * @brief The solution to the problem Array merging
 * (https://codeforces.com/problemset/problem/1831/B)
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
    ll t, n, prev, curr, i, cc, res;
    ;
    map<ll, pair<ll, ll>> cvs;

    cin >> t;
    while (t--) {
        cin >> n, cc = 0, prev = -1, cvs.clear();
        for (i = 0; i < n; i++) {
            cin >> curr;
            if (curr != prev) {
                cvs[prev].first = max(cvs[prev].first, cc);
                cc = 0;
            }
            cc++;
            prev = curr;
        }
        cvs[prev].first = max(cvs[prev].first, cc);
        cc = 0;
        for (i = 0; i < n; i++) {
            cin >> curr;
            if (curr != prev) {
                cvs[prev].second = max(cvs[prev].second, cc);
                cc = 0;
            }
            cc++;
            prev = curr;
        }
        cvs[prev].second = max(cvs[prev].second, cc);
        res = 0;
        for (const auto &[_, y] : cvs)
            res = max(res, y.first + y.second);
        cout << res << '\n';
    }
    return (EXIT_SUCCESS);
}