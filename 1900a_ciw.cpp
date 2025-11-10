/**
 * @file 1900a_ciw.cpp
 * @author Ukeme Edet (ukemeedet2207@gmail.com)
 * @brief The solution to the problem Cover in Water
 * (https://codeforces.com/problemset/problem/1900/A)
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
    ll t, n;
    string s;

    cin >> t;
    while (t--) {
        cin >> n >> s;
        if (s.find("...") != string::npos)
            cout << "2\n";
        else
            cout << count(s.begin(), s.end(), '.') << '\n';
    }
    return (EXIT_SUCCESS);
}