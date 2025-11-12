/**
 * @file 1899b_250ttot.cpp
 * @author Ukeme Edet (ukemeedet2207@gmail.com)
 * @brief The solution to the problem 250 Thousand Tons of TNT
 * (https://codeforces.com/problemset/problem/1899/B)
 * @version 0.1
 * @date 2025-11-12
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll max_diff(ll k, vector<ll> &a) {
    ll mis = LLONG_MAX, mas = LLONG_MIN, i, sum, n = a.size(), j;

    for (i = 0; i < k; i++) {
        sum = 0;
        for (j = i * n / k; j < (i + 1) * n / k; j++)
            sum += a[j];
        mis = min(mis, sum), mas = max(mas, sum);
    }
    return mas - mis;
}

/**
 * @brief The main function
 *
 * @return int
 */
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t, n, res, i;
    vector<ll> a;

    cin >> t;
    while (t--) {
        cin >> n, a.resize(n), res = 0;
        for (auto &ai : a)
            cin >> ai;
        for (i = 1; i <= n; i++)
            if (n % i == 0)
                res = max(res, max_diff(i, a));
        cout << res << '\n';
    }
    return (EXIT_SUCCESS);
}