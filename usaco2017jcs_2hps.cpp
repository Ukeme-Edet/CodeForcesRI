/**
 * @file usaco2017jcs_2hps.cpp
 * @author Ukeme Edet (ukemeedet2207@gmail.com)
 * @brief The solution to the problem Hoof, Paper, Scissors
 * (https://usaco.org/index.php?page=viewproblem2&cpid=691)
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
 * @brief The main function
 *
 * @return int
 */
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, i, res = 0;
    vector<char> g;
    vector<ll> px = {0, 0, 0}, sx = {0, 0, 0};
    FILE *fi = freopen("hps.in", "r", stdin),
         *fo = freopen("hps.out", "w", stdout);

    cin >> n;
    g.resize(n);
    for (i = 0; i < n; i++) {
        cin >> g[i];
        sx[0] += g[i] == 'H';
        sx[1] += g[i] == 'P';
        sx[2] += g[i] == 'S';
    }
    if (fi)
        fclose(fi);
    for (i = 0; i < n; i++) {
        px[0] += g[i] == 'H';
        px[1] += g[i] == 'P';
        px[2] += g[i] == 'S';
        sx[0] -= g[i] == 'H';
        sx[1] -= g[i] == 'P';
        sx[2] -= g[i] == 'S';
        res = max(res, *max_element(px.begin(), px.end()) +
                           *max_element(sx.begin(), sx.end()));
    }
    cout << res;
    cout.flush();
    if (fo)
        fclose(fo);
    return (EXIT_SUCCESS);
}