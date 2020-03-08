#include <utility>
#include <iostream>

namespace 
{

unsigned int fibonacci_step(std::pair<unsigned int, unsigned int> const& prenultimate)
{
    return prenultimate.first + prenultimate.second;
}

unsigned int fibonacci_sum(unsigned int const upper_bound)
{
    // N = 2
    std::pair<unsigned int, unsigned int> seed(
        std::make_pair(0, 1));

    if (upper_bound == 0)
    {
        return seed.first;
    } 
    if (upper_bound == 1)
    {
        return seed.second;
    } 

    unsigned int sum = seed.first + seed.second;
    for (int i = 2; i <= upper_bound; ++i)
    {
        unsigned int step = fibonacci_step(seed);
        sum += step;
        seed.first = seed.second;
        seed.second = step;
    }

    return sum;
}

}

int main()
{
    std::cout 
        << "Solution to Project Euler Problem 2: "
        << fibonacci_sum(10);

    return 0;
}