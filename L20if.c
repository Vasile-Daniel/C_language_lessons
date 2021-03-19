#include <stdio.h>

int main()
{
	int x;
	int a;

	printf("introdu x: ");
	scanf("%d", &x);
	printf("introdu a: ");
	scanf("%d", &a);

	if(x > a)
	{
		printf("numarul %d este mai mare ca %d. \r\n", x, a);
	}

	if(x < a)
	{
		printf("numarul %d este mai mic ca %d. \r\n", x, a);
	}

	if(x==a)
	{
		printf("numarul %d este egal cu %d", x, a);
	}
	return 0;
}