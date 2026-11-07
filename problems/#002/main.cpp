#include <iostream>
#include <cstdint>

void solve()
{
    constexpr uint64_t LIMIT = 4000000;

    uint64_t a = 2;
    uint64_t b = 8;
    uint64_t sum = 2;

    for (; b <= LIMIT;)
    {
        sum += b;

        uint64_t next = 4 * b + a;

        a = b;
        b = next;
    }

    std::cout << sum << '\n';
}

int main()
{
    solve();
}