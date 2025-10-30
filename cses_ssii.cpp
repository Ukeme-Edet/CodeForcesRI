/**
 * @file cses_ssii.cpp
 * @author Ukeme Edet (ukemeedet2207@gmail.com)
 * @brief The solution to the problem Subarray Sum II
 * (https://cses.fi/problemset/task/1661)
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
    ll n, x, ai, i, res = 0;
    vector<ll> ps;
    map<ll, ll> fm = {{0, 1}};

    cin >> n >> x;
    ps.resize(n + 1);
    for (i = 0; i < n; i++) {
        cin >> ai;
        ps[i + 1] = ps[i] + ai;
        fm[ps[i + 1]]++;
    }
    for (i = 0; i < n; i++) {
        fm[ps[i]]--;
        res += fm[ps[i] + x];
    }
    cout << res;
    return (EXIT_SUCCESS);
}