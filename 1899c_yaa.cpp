/**
 * @file 1899c_yaa.cpp
 * @author Ukeme Edet (ukemeedet2207@gmail.com)
 * @brief The solution to the problem Yarik and Array
 * (https://codeforces.com/problemset/problem/1899/C)
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
    ll t, n, cs, res, i, curr, pp;

    cin >> t;
    while (t--) {
        cin >> n >> curr, res = cs = curr, pp = curr & 1;
        for (i = 1; i < n; i++) {
            cin >> curr;
            if ((curr & 1) == pp)
                cs = curr;
            else
                cs = max(cs + curr, curr);
            res = max(cs, res);
            pp = curr & 1;
        }
        cout << res << '\n';
    }
    return (EXIT_SUCCESS);
}