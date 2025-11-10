/**
 * @file usaco2021dcs_3ci.cpp
 * @author Ukeme Edet (ukemeedet2207@gmail.com)
 * @brief The solution to the problem Convoluted Intervals
 * (https://usaco.org/index.php?page=viewproblem2&cpid=1160)
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
    ll n, m, i, j, res = 0;
    vector<ll> mps1, mps2;
    vector<pair<ll, ll>> inter, sev;

    cin >> n >> m, inter.resize(n), sev.resize(2 * m + 1),
        mps1.resize(2 * m + 1), mps2.resize(2 * m + 1);
    for (auto &[a, b] : inter)
        cin >> a >> b, sev[a].first++, sev[b].second++;
    for (i = 0; i <= m; i++)
        for (j = 0; j <= m; j++)
            mps1[i + j] += sev[i].first * sev[j].first,
                mps2[i + j] += sev[i].second * sev[j].second;
    for (i = 0; i <= 2 * m; i++) {
        res += mps1[i];
        cout << res << '\n';
        res -= mps2[i];
    }
    return (EXIT_SUCCESS);
}