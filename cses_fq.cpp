/**
 * @file cses_fq.cpp
 * @author Ukeme Edet (ukemeedet2207@gmail.com)
 * @brief The solution to the problem Forest Queries
 * (https://cses.fi/problemset/task/1652)
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
    ll n, q, x1, y1, x2, y2, i, j;
    string s;
    vector<vector<ll>> ps;

    cin >> n >> q;
    ps.resize(n + 1, vector<ll>(n + 1));
    for (i = 0; i < n; i++) {
        cin >> s;
        for (j = 0; j < n; j++)
            ps[i + 1][j + 1] =
                ps[i + 1][j] + ps[i][j + 1] - ps[i][j] + (s[j] == '*');
    }
    while (q--) {
        cin >> y1 >> x1 >> y2 >> x2;
        cout << ps[y2][x2] - ps[y1 - 1][x2] - ps[y2][x1 - 1] +
                    ps[y1 - 1][x1 - 1]
             << '\n';
    }
    return (EXIT_SUCCESS);
}