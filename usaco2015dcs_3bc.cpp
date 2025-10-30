/**
 * @file usaco2015dcs_3bc.cpp
 * @author Ukeme Edet (ukemeedet2207@gmail.com)
 * @brief The solution to the problem Breed Counting
 * (https://usaco.org/index.php?page=viewproblem2&cpid=572)
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
    ll n, q, a, b, i, x;
    vector<ll> pa, pb, pc;
    FILE *fin = freopen("bcount.in", "r", stdin),
         *fout = freopen("bcount.out", "w", stdout);

    cin >> n >> q;
    pa.resize(n + 1), pb.resize(n + 1), pc.resize(n + 1);
    for (i = 0; i < n; i++) {
        cin >> x;
        pa[i + 1] = pa[i] + (x == 1);
        pb[i + 1] = pb[i] + (x == 2);
        pc[i + 1] = pc[i] + (x == 3);
    }

    while (q--) {
        cin >> a >> b;
        cout << pa[b] - pa[a - 1] << ' ' << pb[b] - pb[a - 1] << ' '
             << pc[b] - pc[a - 1] << '\n';
    }

    if (fin)
        fclose(fin);

    cout.flush();

    if (fout)
        fclose(fout);

    return (EXIT_SUCCESS);
}