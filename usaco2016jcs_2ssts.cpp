/**
 * @file usaco2016jcs_2ssts.cpp
 * @author Ukeme Edet (ukemeedet2207@gmail.com)
 * @brief The solution to the problem Subsequence Summing To
 * Sevens(https://usaco.org/index.php?page=viewproblem2&cpid=595)
 * @version 0.1
 * @date 2025-10-30
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
    ll n, x, cs = 0, i, res = 0;
    map<ll, pair<ll, ll>> idx = {{0, {-1, -1}}};
    FILE *fi = freopen("div7.in", "r", stdin),
         *fo = freopen("div7.out", "w", stdout);

    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> x;
        cs = (cs + x) % 7;
        if (idx.find(cs) == idx.end())
            idx[cs] = {i, i};
        idx[cs].second = i;
    }
    if (fi)
        fclose(fi);

    for (const auto &[k, v] : idx)
        res = max(res, v.second - v.first);
    cout << res << '\n';
    cout.flush();
    if (fo)
        fclose(fo);
    return (EXIT_SUCCESS);
}