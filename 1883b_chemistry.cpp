/**
 * @file 1883b_chemistry.cpp
 * @author Ukeme Edet (ukemeedet2207@gmail.com)
 * @brief The solution to the problem Chemistry
 * (https://codeforces.com/problemset/problem/1883/B)
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
    ll t, n, k, oc;
    string s;
    map<char, ll> fm;

    cin >> t;
    while (t--) {
        cin >> n >> k >> s;
        fm.clear();
        for (const auto &c : s)
            fm[c]++;
        oc = 0;
        for (const auto &[c, v] : fm)
            oc += v % 2;
        if (oc - 1 <= k) {
            cout << "YES\n";
        } else
            cout << "NO\n";
    }
    return (EXIT_SUCCESS);
}