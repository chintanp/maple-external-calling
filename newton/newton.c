/* newton.c*/
#include <stdio.h>
#include <math.h>
/* An implementation of Newton's method for finding a
root
of the given function, f. The derivative of f,
fprime
must also be provided.
The initial guess is continuously improved until
the absolute value of f(guess) is less than or equal
to
the given tolerance. The improved guess is returned.
*/

double newton(
	double(*f) (double),
	double(*fprime) (double),
	double guess,
	double tolerance)
{
	while (fabs(f(guess)) > tolerance) {
		guess = guess - f(guess) / fprime(guess);
	}
	return guess;
}


