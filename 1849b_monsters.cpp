/**
 * @file 1849b_monsters.cpp
 * @author Ukeme Edet (ukemeedet2207@gmail.com)
 * @brief The solution to the problem Monsters
 * (https://codeforces.com/problemset/problem/1849/B)
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
    ll t, n, k, i;
    vector<pair<ll, ll>> a;

    cin >> t;
    while (t--) {
        cin >> n >> k, i = 0, a.resize(n);
        for (auto &[ai, idx] : a) {
            cin >> ai, idx = i++;
            ai %= k;
            if (!ai)
                ai = k;
        }
        sort(a.begin(), a.end(), [](auto a, auto b) {
            return a.first > b.first ||
                   (a.first == b.first && a.second < b.second);
        });
        for (const auto &[_, idx] : a)
            cout << idx + 1 << ' ';
        cout << '\n';
    }
    return (EXIT_SUCCESS);
}