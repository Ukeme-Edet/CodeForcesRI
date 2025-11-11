/**
 * @file 1869a_miz.cpp
 * @author Ukeme Edet (ukemeedet2207@gmail.com)
 * @brief The solution to the problem Make It Zero
 * (https://codeforces.com/problemset/problem/1869/A)
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
    ll t, n, i, temp, res;

    cin >> t;
    while (t--) {
        cin >> n;
        for (i = 0; i < n; i++)
            cin >> temp;
        if (n % 2)
            cout << 4 << '\n'
                 << "1 " << n << '\n'
                 << "1 " << n - 1 << '\n'
                 << n - 1 << ' ' << n << '\n'
                 << "1 " << n << '\n';
        else
            cout << 2 << '\n' << "1 " << n << '\n' << "1 " << n << '\n';
    }
    return (EXIT_SUCCESS);
}