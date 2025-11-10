/**
 * @file 1878c_vic.cpp
 * @author Ukeme Edet (ukemeedet2207@gmail.com)
 * @brief The solution to the problem Vasilije in Cacak
 * (https://codeforces.com/problemset/problem/1878/C)
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
    ll t, n, k, x, s1, s2, s3;

    cin >> t;
    while (t--) {
        cin >> n >> k >> x;
        s1 = k * (k + 1) / 2;
        s2 = n * (n + 1) / 2;
        s3 = (n - k) * (n - k + 1) / 2;
        cout << (s1 <= x && x <= s2 - s3 ? "YES\n" : "NO\n");
    }
    return (EXIT_SUCCESS);
}