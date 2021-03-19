#include <stdio.h>

int main()
{
	int x;
	printf("introdu numral x: ");
	scanf("%d", &x);


	if (x < 0)
	{
		printf("Numarul este negativ. \r\n");
	}
	else if (x == 0)
	{
		printf("numarul este egal cu zero.\r\n");
	}
	else 
	{
		printf("numarul este pozitiv.\r\n");
	}

	return 0;
}