#include "main.h"
#include <stdio.h>
#include <stdlib.h>


void del(calc c1, calc c2)		//деление
{
	calc d;
	d.re = ((c1.re * c2.re) + (c1.im * c2.im)) / ((c2.re * c2.re) + (c2.im * c2.im));
	d.im = ((c1.im * c2.re) - (c1.re * c2.im)) / ((c2.re * c2.re) + (c2.im * c2.im));


	if ((d.im) >= 0)				// вывод
	{
		printf("c1 / c2 = %d + %d * i\n", d.re, d.im);
	}
	else
	{
		printf("c1 / c2 = %d %d * i\n", d.re, d.im);
	}
}

