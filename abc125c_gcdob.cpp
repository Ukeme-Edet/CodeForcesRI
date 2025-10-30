/**
 * @file abc125c_gcdob.cpp
 * @author Ukeme Edet (ukemeedet2207@gmail.com)
 * @brief The solution to the problem GCD on Blackboard
 * (https://atcoder.jp/contests/abc125/tasks/abc125_c)
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
    ll n, i, res;
    vector<ll> a, px, sx;

    cin >> n;
    a.resize(n), px.resize(n), sx.resize(n);
    for (auto &ai : a)
        cin >> ai;
    px[0] = a[0], sx[n - 1] = a[n - 1];
    for (i = 1; i < n; i++) {
        px[i] = gcd(px[i - 1], a[i]);
        sx[n - i - 1] = gcd(sx[n - i], a[n - i - 1]);
    }
    res = max(px[n - 2], sx[1]);
    for (i = 1; i < n - 1; i++)
        res = max(res, gcd(px[i - 1], sx[i + 1]));
    cout << res;
    return (EXIT_SUCCESS);
}