#include <iostream>
#include <vector>

using namespace std;


vector<bool> sieve(int n) {
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i <= n; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
    return is_prime;
}

int main() {
    int n = 25;  
    vector<bool> primes = sieve(n);

    for (int i = 0; i <= n; ++i) {
        if (primes[i]) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
