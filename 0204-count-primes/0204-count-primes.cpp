class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;
        
        // Only track odd numbers to cut operations in half
        vector<bool> isprime(n, true);
        int ans = n / 2; // Assume all odd numbers >= 3 are prime initially (n/2 items)

        for (int i = 3; (long long)i * i < n; i += 2) {
            if (isprime[i]) {
                for (long long j = (long long)i * i; j < n; j += 2 * i) {
                    if (isprime[j]) {
                        isprime[j] = false;
                        ans--; // Decrement count when marking an odd composite
                    }
                }
            }
        }

        return ans;
    }
};