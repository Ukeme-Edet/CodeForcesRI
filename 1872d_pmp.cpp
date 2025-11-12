/**
 * @file 1872d_pmp.cpp
 * @author Ukeme Edet (ukemeedet2207@gmail.com)
 * @brief The solution to the problem Plus Minus Permutation
 * (https://codeforces.com/problemset/problem/1872/D)
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
    ll t, n, x, y, lc, xf, yf, lcf;

    cin >> t;
    while (t--) {
        cin >> n >> x >> y;
        lc = lcm(x, y), lcf = n / lc;
        xf = n / x - lcf, yf = n / y - lcf;
        cout << (n * (n + 1) - (n - xf) * (n - xf + 1) - yf * (yf + 1)) / 2
             << '\n';
    }
    return (EXIT_SUCCESS);
}