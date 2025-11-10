/**
 * @file usaco2016usocg_1stf.cpp
 * @author Ukeme Edet (ukemeedet2207@gmail.com)
 * @brief The solution to the problem Splitting the Field
 * (https://usaco.org/index.php?page=viewproblem2&cpid=645)
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
 * @brief Computes minimum area of two non-overlapping rectangles containing all
 * cows.
 *
 * Partitions cows by x-coordinate and finds optimal split point.
 *
 * @param cows Vector of cow coordinates (x, y). Modified by sorting.
 * @return Minimum total area. LLONG_MAX if n < 2.
 * @note Time: O(n log n), Space: O(n)
 */
ll get_min(vector<pair<ll, ll>> &cows) {
    sort(cows.begin(), cows.end());
    ll i, n = cows.size(), miy = cows[0].second, may = cows[0].second,
          res = LLONG_MAX;
    vector<pair<ll, ll>> mmy(n);
    mmy[n - 1] = {cows[n - 1].second, cows[n - 1].second};
    for (i = n - 2; i >= 0; i--)
        mmy[i] = {min(cows[i].second, mmy[i + 1].first),
                  max(cows[i].second, mmy[i + 1].second)};
    for (i = 0; i < n - 1; i++) {
        miy = min(cows[i].second, miy);
        may = max(cows[i].second, may);
        res = min(res, (may - miy) * (cows[i].first - cows[0].first) +
                           (cows[n - 1].first - cows[i + 1].first) *
                               (mmy[i + 1].second - mmy[i + 1].first));
    }
    return res;
}

/**
 * @brief The main function
 *
 * @return int
 */
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, res, mx, mix, may, miy;
    vector<pair<ll, ll>> cows;
    FILE *fi = freopen("split.in", "r", stdin),
         *fo = freopen("split.out", "w", stdout);

    cin >> n, cows.resize(n);
    for (auto &[x, y] : cows)
        cin >> x >> y;
    if (fi)
        fclose(fi);
    if (n == 1) {
        cout << 0;
        return (EXIT_SUCCESS);
    }
    res = get_min(cows);
    mx = cows[n - 1].first, mix = cows[0].first;
    for (auto &[x, y] : cows)
        swap(x, y);
    res = min(res, get_min(cows));
    may = cows[n - 1].first, miy = cows[0].first;
    cout << (mx - mix) * (may - miy) - res;
    cout.flush();
    if (fo)
        fclose(fo);
    return (EXIT_SUCCESS);
}