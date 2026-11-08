#include <iostream>
#include <cstdint>

uint64_t solve() {
    uint64_t N = 600851475143ULL;
    uint64_t max_prime = 0;

    for (uint64_t i = 2; i <= N / i; i++) 
    {
        while (N % i == 0) 
        {
            N /= i;
            max_prime = i;
        }
    }

    if (N > 1) 
    {
        max_prime = N;
    }

    return max_prime;
}

int main() {

    std::cout << solve() << '\n';

}
