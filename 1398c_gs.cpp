/**
 * @file 1398c_gs.cpp
 * @author Ukeme Edet (ukemeedet2207@gmail.com)
 * @brief The solution to the problem Good Subarrays
 * (https://codeforces.com/contest/1398/problem/C)
 * @version 0.1
 * @date 2025-10-31
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
    ll t, n, i, res;
    string s;
    vector<ll> ps;
    map<ll, ll> fm;

    cin >> t;
    while (t--) {
        cin >> n >> s;
        ps.resize(n + 1);
        fm = {{0, 1}};
        for (i = 0; i < n; i++) {
            ps[i + 1] = ps[i] + s[i] - '0';
            fm[ps[i + 1] - i - 1]++;
        }
        res = 0;
        for (const auto &[k, v] : fm)
            res += v * (v - 1) / 2;
        cout << res << '\n';
    }
    return (EXIT_SUCCESS);
}