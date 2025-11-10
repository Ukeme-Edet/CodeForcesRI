/**
 * @file 1904a_forked.cpp
 * @author Ukeme Edet (ukemeedet2207@gmail.com)
 * @brief The solution to the problem Forked!
 * (https://codeforces.com/problemset/problem/1904/A)
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
    ll t, a, b, xk, yk, xq, yq;
    set<pair<ll, ll>> fp1, fp2, dirs = {{1, 1}, {1, -1}, {-1, 1}, {-1, -1}},
                                res;

    cin >> t;
    while (t--) {
        cin >> a >> b >> xk >> yk >> xq >> yq;
        fp1.clear(), fp2.clear(), res.clear();
        for (const auto &[dx, dy] : dirs) {
            fp1.insert({xk + a * dx, yk + b * dy});
            fp1.insert({xk + b * dx, yk + a * dy});
            fp2.insert({xq + a * dx, yq + b * dy});
            fp2.insert({xq + b * dx, yq + a * dy});
        }
        set_intersection(fp1.begin(), fp1.end(), fp2.begin(), fp2.end(),
                         inserter(res, res.begin()));
        cout << res.size() << '\n';
    }
    return (EXIT_SUCCESS);
}