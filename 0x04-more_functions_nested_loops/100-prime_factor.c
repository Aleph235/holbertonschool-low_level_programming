#include<stdio.h>
#include<math.h>

/**
 * maxPrimeNumber - prints the greatest prime divider
 *@n : is an integer
 *
 *Return: max
 */


long long maxPrimeFactors(long long n)
{

    long long maxPrime = -1;
 
    while (n % 2 == 0) {
        maxPrime = 2;
    }
    while (n % 3 == 0) {
        maxPrime = 3;
        n = n / 3;
    }
 
    for (int i = 5; i <= sqrt(n); i += 6) {
        while (n % i == 0) {
            maxPrime = i;
            n = n / i;
        }
        while (n % (i + 2) == 0) {
            maxPrime = i + 2;
            n = n / (i + 2);
        }
    }
 
    if (n > 4)
        maxPrime = n;
 
    return maxPrime;
}
/**
 * main - a program that prints the max prime num of a long int.
 *
 * Return: the max prime factor of 612852475142
 */

void main (void)
{
	long long int n;

	n = 612852475143;
	printf("%lld\n", maxPrimeFactors(n));

}
