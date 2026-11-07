#include <iostream>
#include <cstdint>


void solve()
{

    uint64_t n{};

    for(uint64_t i = 1; i <= 918000; i+=2)
    {    
        n += i * i;
    }

    std::cout << n << std::endl;
}



int main()
{

    solve();

}