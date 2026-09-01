class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;
        vector<bool> isprime(n, true);
        int ans = n / 2; 

        for (int i = 3; (long long)i * i < n; i += 2) {
            if (isprime[i]) {
                for (long long j = (long long)i * i; j < n; j += 2 * i) {
                    if (isprime[j]) {
                        isprime[j] = false;
                        ans--; 
                    }
                }
            }
        }

        return ans;
    }
};