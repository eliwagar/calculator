#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void sum(calc c1, calc c2)		//сложение
{
	calc s;
	s.re = c1.re + c2.re;
	s.im = c1.im + c2.im;

	if ((s.im) >=0)		//вывод
	{printf("c1 + c2 = %d + %d * i\n", s.re, s.im);}
	else
	{printf("c1 + c2 = %d %d *i\n", s.re, s.im);}
}


