/**
 * @file 104114n_ng.cpp
 * @author Ukeme Edet (ukemeedet2207@gmail.com)
 * @brief The solution to the problem Nusret Gökçe
 * (https://codeforces.com/gym/104114/problem/N)
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
    ll n, m, i = 0;
    vector<ll> s;
    priority_queue<pair<ll, ll>> cq;

    cin >> n >> m, s.resize(n);
    for (auto &si : s)
        cin >> si, cq.push({si, i++});
    while (!cq.empty()) {
        auto [v, idx] = cq.top();
        cq.pop();
        if (v != s[idx])
            continue;
        if (idx > 0 && v - s[idx - 1] > m)
            s[idx - 1] = v - m, cq.push({v - m, idx - 1});
        if (idx < n - 1 && v - s[idx + 1] > m)
            s[idx + 1] = v - m, cq.push({v - m, idx + 1});
    }
    for (const auto &si : s)
        cout << si << ' ';
    return (EXIT_SUCCESS);
}