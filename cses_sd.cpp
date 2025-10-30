/**
 * @file cses_sd.cpp
 * @author Ukeme Edet (ukemeedet2207@gmail.com)
 * @brief The solution to the problem Subarray
 * Divisibility(https://cses.fi/problemset/task/1662)
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
    ll n, i, x, cs = 0, res = 0;
    map<ll, ll> fm = {{0, 1}};

    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> x;
        cs = ((cs + x) % n + n) % n;
        res += fm[cs]++;
    }
    cout << res;
    return (EXIT_SUCCESS);
}