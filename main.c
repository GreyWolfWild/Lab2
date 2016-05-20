#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	long double discriminant = b*b - 4*a*c;

	if (discriminant > 0)
	{
		printf("D > 0; 2 корня:\n");
		printf("x1 = %lf\n", (-b + sqrt(discriminant))/(2*a));
		printf("x2 = %lf\n", (-b + sqrt(discriminant))/(2*a));
	}
	else if (discriminant == 0)
	{
		printf("D = 0; 1 корень:\n");
		printf("x = %lf", -1.*b/(2*a));
	}
	else if (discriminant < 0)
		printf("D < 0; нет корней.\n");
	return 0;
}
