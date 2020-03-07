#include <cmath>
#include <iostream>

/**
 * If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. 
 * The sum of these multiples is 23.
 *
 * Find the sum of all the multiples of 3 or 5 below 1000.
 *
 * Note: _3_ or _5_ not _3_ and _5_
 */



namespace 
{
/**
 * @brief Find the sum of all the multiples of k, within the range 0 < upper_bound
 *        Implemented as:
 *        O(1)
 *        S(1)
 */
int sum_of_n_multiples(unsigned int const k, unsigned int const upper_bound)
{
    const unsigned int n = std::floor( (upper_bound - 1) / k );

    return k * n * (n+1)/2;
}

}

int main()
{
    std::cout 
        << "Solution to Project Euler Problem 1: "
        << sum_of_n_multiples(3, 1000) + sum_of_n_multiples(5, 1000) - sum_of_n_multiples(3*5, 1000)
        << std::endl;

    return 0;
}