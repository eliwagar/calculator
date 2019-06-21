#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>

void main()
{
	calc c1;
	calc c2;

	int choice;

	void *s;
	void *m;
	void *u;
	void *d;					//подключение библиотеки
	int (*sum)(calc, calc);
	int (*min)(calc, calc);
	int (*umn)(calc, calc);
	int (*del)(calc, calc);

	s = dlopen("./libsum.so", RTLD_NOW);
	m = dlopen("./libmin.so", RTLD_NOW);
	u = dlopen("./libumn.so", RTLD_NOW);
	d = dlopen("./libdel.so", RTLD_NOW);

	if (s == NULL) {printf("fail"); exit (0);}
	if (m == NULL) {printf("fail"); exit (0);}
	if (u == NULL) {printf("fail"); exit (0);}
	if (d == NULL) {printf("fail"); exit (0);}

	//printf("dl - > %s\n", dlerror());
	sum = dlsym(s, "sum");
	//if (sum == NULL) {printf("1fail\n"); exit(0);}
	min = dlsym(m, "min");
	umn = dlsym(u, "umn");
	del = dlsym(d, "del");


	printf("выберите действие:\n");			//меню
	printf("1 - сумма\n");
	printf("2 - разность\n");
	printf("3 - умножение\n");
	printf("4 - деление\n");
	scanf("%d", &choice);

	//if ((choice!=1) | (choice!=2) | (choice!=3) | (choice!=4)) {exit(0);}


	printf("введите re 1 числа: ");			//ввод чисел
	scanf("%d", &c1.re);
	printf("введите im 1 числа: ");
	scanf("%d", &c1.im);
	printf("введите re 2 числа: ");
	scanf("%d", &c2.re);
	printf("введите im 2 числа: ");
	scanf("%d", &c2.im);

	switch (choice)					//выбор функции
	{
		case 1: sum(c1, c2);
			dlclose(s);
			break;
		case 2: min(c1, c2);
			dlclose(m);
			 break;
		case 3: umn(c1, c2);
			dlclose(u);
			break;
		case 4: del(c1, c2);
			dlclose(d);
			break;
	}
}
