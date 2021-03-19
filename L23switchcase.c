#include <stdio.h>

int main()
{
	float nr1, nr2, result=0;
	char operation; // + , - , * , /

	printf("nr1 = ");
	scanf("%f", &nr1);

	printf("nr2 = ");
	scanf("%f", &nr2);

	printf("operatia(+,-,*,/): ");
	scanf(" %c", &operation); // se adauga 'space' inainte de %c ca altfel va citi "\n" (care este un caracter ;) .. 

	switch(operation)
	{
		case '+':
			result =nr1 + nr2;
			break;
		case '-':
			result = nr1 - nr2;
			break;
		case '*':
			result = nr1 * nr2; 
			break;
		case '/':
			result = nr1 / nr2;
			break;
		default:
			printf("Nu suporta asa operatie. \r\n");
	}

	printf("Resultatul este: %.3f \r\n", result);
	return 0;
}


/*
	if(operation == '+')
	{
		result = nr1 + nr2;
		//printf("Adunarea dintre nr1 si nr 2 este: %f\r\n", result);
	}
	else if (operation == '-')
	{
		result = nr1 - nr2;
		//printf("Adunarea scadearea dintre nr1 si nr2 este: %f\r\n", result);
	}
	else if (operation == '*')
	{
		result = nr1 * nr2;
		//printf("Inmultirea dintre nr1 si nr 2 este: %f\r\n", result);
	}
	else if (operation == '/')
	{
		result = nr1/nr2;
		//printf("Impartirea dintre n1 si n2 este: %f\r\n", result);
	}
	else 
	{
		printf("nu suportam asa operatie :( ");
	}

	printf("Rezultatul este: %.3f \r\n", result);
*/