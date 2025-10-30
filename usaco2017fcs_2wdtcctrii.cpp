/**
 * @file usaco2017fcs_2wdtcctrii.cpp
 * @author Ukeme Edet (ukemeedet2207@gmail.com)
 * @brief The solution to the problem Why Did the Cow Cross the Road II
 * (https://usaco.org/index.php?page=viewproblem2&cpid=715)
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
    ll n, k, b, i, x, res = 0, fx = 0;
    vector<ll> arr;
    FILE *fi = freopen("maxcross.in", "r", stdin),
         *fo = freopen("maxcross.out", "w", stdout);

    cin >> n >> k >> b;
    arr.resize(n, 1);
    for (i = 0; i < b; i++) {
        cin >> x;
        arr[x - 1] = 0;
    }
    if (fi)
        fclose(fi);
    for (i = 0; i < k; i++)
        res += arr[i] == 0;
    fx = res;
    for (; i < n; i++) {
        fx += arr[i] == 0;
        fx -= arr[i - k] == 0;
        res = min(res, fx);
    }
    cout << res;
    cout.flush();
    if (fo)
        fclose(fo);
    return (EXIT_SUCCESS);
}