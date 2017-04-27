/*Ќаписать функцию нахождени€ в массиве вещественных чисел числа
с наименьшей(наибольшей) дробной частью (дробна€ часть всегда положительна).*/

#include "stdafx.h"
#include <math.h>
#define MAX  5

void search( double *a)
{
	int i = 0;

	double max = 0;
	double min = 1;

	for (i = 0; i < MAX; i++)
	{
		if (abs(a[i] - int(a[i])) > max)
			max = abs(a[i] - int(a[i]));
		if (abs(a[i] - int(a[i])) < min)
			min = abs(a[i] - int(a[i]));

	}
	printf("max = ");
	printf ("%.3lf\n", max);
	printf("min = ");
	printf ("%.3lf\n", min);
}

int main ()
{
	printf("Enter the %d numbers: ", MAX);

	int i = 0;
	double a[MAX];
	for (i = 0; i < MAX; i++)
		scanf_s("%lf", &a[i]);

	search(a);
	return 0;
}

