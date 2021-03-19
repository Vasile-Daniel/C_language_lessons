#include <stdio.h>
#include <stdbool.h>
// if-else 
int main()
{
	int x;

	printf("introdu x: ");
	scanf("%d", &x);
	int result = x == 11;
	printf("%d\r\n", result);

	if(x < 0) // daca ... atunci executa 1
	{
		printf("Numarul este negativ.\r\n");
	}
	else // in caz contrar ... executa 2
	{
		printf("Numarul este pozitiv.\r\n");
	}



	if(result)
	{
		printf("Am executat blocul.\r\n");
	}
	else 
	{
		printf("coditia de adevar nu este indeplinita.\r\n");
	}

	return 0;
}