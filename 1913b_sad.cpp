/**
 * @file 1913b_sad.cpp
 * @author Ukeme Edet (ukemeedet2207@gmail.com)
 * @brief The solution to the problem Swap and Delete
 * (https://codeforces.com/problemset/problem/1913/B)
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
    ll t, oc, zc, i, n;
    string s;

    cin >> t;
    while (t--) {
        cin >> s;
        n = s.size();
        zc = count(s.begin(), s.end(), '0');
        oc = count(s.begin(), s.end(), '1');
        for (i = 0; i < n; i++) {
            if ((s[i] == '0' && !oc) || (s[i] == '1' && !zc))
                break;
            zc -= s[i] == '1';
            oc -= s[i] == '0';
        }
        cout << n - i << '\n';
    }
    return (EXIT_SUCCESS);
}