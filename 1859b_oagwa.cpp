/**
 * @file 1859b_oagwa.cpp
 * @author Ukeme Edet (ukemeedet2207@gmail.com)
 * @brief The solution to the problem Olya and Game with Arrays
 * (https://codeforces.com/problemset/problem/1859/B)
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
    ll t, n, m, res, tr;
    vector<vector<ll>> arrs;

    cin >> t;
    while (t--) {
        cin >> n, arrs.resize(n), res = 0, tr = LLONG_MAX;
        for (auto &arr : arrs) {
            cin >> m, arr.resize(m);
            for (auto &ai : arr)
                cin >> ai;
            sort(arr.begin(), arr.end());
            res += arr[1];
            tr = min(tr, arr[0]);
        }
        sort(arrs.begin(), arrs.end(),
             [](auto a, auto b) { return a[1] < b[1]; });
        res -= arrs[0][1] - tr;
        cout << res << '\n';
    }
    return (EXIT_SUCCESS);
}