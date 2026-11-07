#include <iostream>
#include <cstdint>

void solve()
{
    constexpr uint32_t LIMIT = 1000;

    uint32_t sum = 0;

    for (uint32_t i = 1; i < LIMIT; ++i)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }

    std::cout << sum << '\n';
}

int main()
{
    solve();
}