/**
 * @file 1765m_ml.cpp
 * @author Ukeme Edet (ukemeedet2207@gmail.com)
 * @brief The solution to the problem Minimum LCM
 * (https://codeforces.com/problemset/problem/1765/M)
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
    ll t, n, i, j;
    vector<ll> primes, is_prime(32000, 1);

    for (i = 2; i < 32000; i++) {
        if (is_prime[i]) {
            for (j = i * i; j < 32000; j += i)
                is_prime[j] = 0;
        }
    }
    for (i = 2; i < 32000; i++)
        if (is_prime[i])
            primes.push_back(i);
    cin >> t;
    while (t--) {
        cin >> n, i = 0;
        while (i < primes.size() && primes[i] <= n) {
            if (n % primes[i] == 0) {
                cout << n / primes[i] << ' ' << n - n / primes[i] << '\n';
                break;
            }
            i++;
        }
        if (i == primes.size())
            cout << "1 " << n - 1 << '\n';
    }
    return (EXIT_SUCCESS);
}