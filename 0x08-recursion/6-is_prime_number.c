include "main.h"

/**
 * is_prime_checker - Helper function
 * to recursively check for prime number
 * @n: The number to be checked
 * @divisor: The current divisor
 * to check for divisibility
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n, int divisor)
{
    if (n <= 1)
    {
        return (0);
    }
    if (divisor > n / 2)
    {
        return (1);
    }
    
    if (n % divisor == 0)
    {
        return (0);
    }
    
    return (is_prime_number(n, divisor + 1));
}

/**
 * is_prime_number - Returns 1 if a
 *number is prime, 0 otherwise
 * @n: The number to be checked
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
    return (is_prime_number(n, 2));
}
