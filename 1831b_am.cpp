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
        cin >> n, cc = prev = 0, cvs.clear();
        for (i = 0; i < n; i++) {
            cin >> curr;
            cc = (curr == prev ? cc : 0) + 1;
            cvs[curr].first = max(cvs[curr].first, cc);
            prev = curr;
        }
        cc = prev = 0;
        for (i = 0; i < n; i++) {
            cin >> curr;
            cc = (curr == prev ? cc : 0) + 1;
            cvs[curr].second = max(cvs[curr].second, cc);
            prev = curr;
        }
        res = 0;
        for (const auto &[_, y] : cvs)
            res = max(res, y.first + y.second);
        cout << res << '\n';
    }
    return (EXIT_SUCCESS);
}