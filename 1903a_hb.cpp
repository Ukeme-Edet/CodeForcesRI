/**
 * @file 1903a_hb.cpp
 * @author Ukeme Edet (ukemeedet2207@gmail.com)
 * @brief The solution to the problem Halloumi Boxes
 * (https://codeforces.com/problemset/problem/1903/A)
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
    ll t, n, k;
    vector<ll> a;

    cin >> t;
    while (t--) {
        cin >> n >> k;
        a.resize(n);
        for (auto &ai : a)
            cin >> ai;
        if (k > 1 || is_sorted(a.begin(), a.end()))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return (EXIT_SUCCESS);
}