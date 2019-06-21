#include "main.h"
#include <stdio.h>
#include <stdlib.h>


void min(calc c1, calc c2)		//вычитание
{
	calc m;
	m.re = c1.re - c2.re;
	m.im = c1.im - c2.im;

	if ((m.im) >= 0)
	{
		printf("c1 - c2 = %d + %d * i\n", m.re, m.im);
	}
	else
	{
		printf("c1 - c2 = %d %d * i\n", m.re, m.im);
	}
}


