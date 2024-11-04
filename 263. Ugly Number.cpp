#include <iostream>
#include <vector>
#include <unordered_map>
#include <numeric>
using namespace std;

const long long MOD = 1e9 + 7;

// Modular exponentiation
long long mod_pow(long long base, long long exp, long long mod) {
    long long result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp % 2 == 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

// Function to factorize an integer and return prime powers
unordered_map<int, int> prime_factors(long long n) {
    unordered_map<int, int> factors;
    for (long long i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            factors[i]++;
            n /= i;
        }
    }
    if (n > 1) factors[n]++;
    return factors;
}

// Function to compute the LCM based on maximum prime powers
long long compute_lcm(const unordered_map<int, int>& max_powers) {
    long long lcm = 1;
    for (const auto& [prime, power] : max_powers) {
        lcm = (lcm * mod_pow(prime, power, MOD)) % MOD;
    }
    return lcm;
}

int main() {
    int t;
    long long d;
    cin >> t >> d;

    vector<long long> A(t), B(t);
    for (int i = 0; i < t; i++) cin >> A[i];
    for (int i = 0; i < t; i++) cin >> B[i];

    // Factorize D once
    auto d_factors = prime_factors(d);

    for (int i = 0; i < t; i++) {
        // Factorize A[i]^B[i]
        unordered_map<int, int> max_powers = d_factors;

        auto a_factors = prime_factors(A[i]);
        for (const auto& [prime, power] : a_factors) {
            max_powers[prime] = max(max_powers[prime], power * B[i]);
        }

        // Compute the LCM
        long long result = compute_lcm(max_powers);
        cout << result << " ";
    }
    cout << endl;

    return 0;
}
