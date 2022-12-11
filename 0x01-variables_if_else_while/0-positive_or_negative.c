#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* made by Aphran with help of some friends about the term srand and RAND MAX
 * the above lines are the predeuned moudules that we are going to use as sources in our code */

int main(void)
{
/* in main is the declaration of our code 
 * and every code is written inside it. */
	/* declaration of integer n */
	int n;

	srand(time(0));
	/* the tie tells it to start form the value zero*/
	n = rand() - RAND_MAX / 2;
	/* this show the randowm number - the maxmum value returned by the  rand function */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
