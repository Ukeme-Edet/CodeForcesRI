/**
 * @file 1791d_ds.cpp
 * @author Ukeme Edet (ukemeedet2207@gmail.com)
 * @brief The solution to the problem Distinct Split
 * (https://codeforces.com/problemset/problem/1791/D)
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
    ll t, n, res, i, f, b;
    string s;
    unordered_set<ll> sf, sb;
    vector<ll> df, db;

    cin >> t;
    while (t--) {
        cin >> n >> s, df.resize(n), db.resize(n), sf.clear(), sb.clear(),
            f = b = res = 0;
        for (i = 0; i < n; i++) {
            f += sf.find(s[i]) == sf.end();
            b += sb.find(s[n - i - 1]) == sb.end();
            df[i] = f, db[n - i - 1] = b, sf.insert(s[i]),
            sb.insert(s[n - i - 1]);
        }
        for (i = 0; i < n - 1; i++)
            res = max(res, df[i] + db[i + 1]);
        cout << res << '\n';
    }
    return (EXIT_SUCCESS);
}