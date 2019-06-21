#include "main.h"
#include <stdio.h>
#include <stdlib.h>



void umn(calc c1, calc c2)		//умножение
{
	calc u;
	u.re = (c1.re * c2.re) - (c1.im * c2.im);
	u.im = (c1.im * c1.re) + (c1.re * c2.im);

	if ((u.im) >=0)
	{
		printf("c1 * c2 = %d + %d * i\n", u.re, u.im);
	}
	else
	{
		printf("c1 * c2 = %d + %d *i\n", u.re, u.im);
	}
}


