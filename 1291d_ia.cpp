/**
 * @file 1291d_ia.cpp
 * @author Ukeme Edet (ukemeedet2207@gmail.com)
 * @brief The solution to the problem  Irreducible Anagrams
 * (https://codeforces.com/contest/1291/problem/D)
 * @version 0.1
 * @date 2025-10-30
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <bits/stdc++.h>

#define ll long long

using namespace std;

/**
 * @brief Checks if a substring is an irreducible anagram.
 *
 * @param l Left boundary (1-indexed)
 * @param r Right boundary (1-indexed)
 * @param s The input string
 * @param fm Prefix frequency matrix
 *
 * @return true if valid, false otherwise
 */
bool is_valid(ll l, ll r, string &s, vector<vector<ll>> &fm) {
    int i, res = 0;
    for (i = 0; i < 26; i++)
        res += fm[r][i] - fm[l - 1][i] > 0;
    return res == r - l + 1 || s[l - 1] != s[r - 1] || res > 2;
}

/**
 * @brief The main function
 *
 * @return int
 */
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll q, l, r, i, n;
    string s;
    vector<vector<ll>> fm;

    cin >> s;
    n = s.size();
    fm.resize(n + 1, vector<ll>(26));
    for (i = 0; i < n; i++) {
        fm[i + 1] = fm[i];
        fm[i + 1][s[i] - 'a']++;
    }
    cin >> q;
    while (q--) {
        cin >> l >> r;
        if (is_valid(l, r, s, fm))
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return (EXIT_SUCCESS);
}