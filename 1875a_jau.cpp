/**
 * @file 1875a_jau.cpp
 * @author Ukeme Edet (ukemeedet2207@gmail.com)
 * @brief The solution to the problem Jellyfish and Undertale
 * (https://codeforces.com/problemset/problem/1875/A)
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
    ll t, a, b, n, res, i, temp;

    cin >> t;
    while (t--) {
        cin >> a >> b >> n, res = b;
        for (i = 0; i < n; i++)
            cin >> temp, res += min(temp, a - 1);
        cout << res << '\n';
    }
    return (EXIT_SUCCESS);
}