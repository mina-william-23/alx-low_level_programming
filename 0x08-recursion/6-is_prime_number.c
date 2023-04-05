#include "main.h"
/**
 * _check - logic of isprime function
 * @num: num to check
 * @n: start count from 3
 * Return: result of check (1) is prime (0) not prime
*/
int _check(int num, int n)
{
	if (num <= 1 || num % 2 == 0)
		return (0);
	else if (num == n || n >= num / 2)
		return (1);
	else if (num % n != 0)
		return (_check(num, n + 2));
	else
		return (0);
}
/**
 * is_prime_number - check if n is prime
 * @n:  num to check
 * Return: result of check (1) is prime (0) not prime
*/
int is_prime_number(int n)
{
	return (_check(n, 3));
}
