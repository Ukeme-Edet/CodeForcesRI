/**
 * @file cses_mss.cpp
 * @author Ukeme Edet (ukemeedet2207@gmail.com)
 * @brief The solution to the problem Maximum Subarray Sum
 * (https://cses.fi/problemset/task/1643)
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
    ll n, res, cs, cv, i;

    cin >> n >> cv;
    res = cs = cv;
    for (i = 1; i < n; i++) {
        cin >> cv;
        cs = max(cs + cv, cv);
        res = max(cs, res);
    }
    cout << res;
    return (EXIT_SUCCESS);
}