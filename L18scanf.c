#include <stdio.h>
int main()
{
	
	////// CARACTERE DE LITERE ////////////////
  	char firstname[15];
  	printf("Type your first name: ");
  	scanf("%s", firstname);
  	printf("Pleased to meet you, %s.\r\n", firstname);
  	printf("\r\n");
	//////// CIFRE SI FORMULE ////////////////////////
	float weight, height, bmi;
	printf("Introdu masa corporala in kg: ");
	scanf("%f", &weight);
	printf("Introdu inaltimea in m:");
	scanf("%f", &height);
	bmi = weight/(height*height);
	printf("Indexul masei corporale (bmi) este: %.2f .\r\n", bmi);
	if (bmi > 25)
	{
		printf("Slabeste in pula mea, ca esti gras ca porcu!\r\n");
	}
	else
	{
		printf("esti de-a dreptul superb .... ideal, mirific...\r\n");
	}
/*
	printf("Bmi normal in functie de:\r\n");
	printf("\r\n");
	printf("Underweight: <18.5\r\n");
	printf("Healthy: 18.5 - 24.9\r\n");
	printf("Overweight: 20.0 - 29.9\r\n");
	printf("Obese: >40");
*/
	return 0;
}

// scanf - scan formatted (citim dupa un anumit format)
// & - semunl apersant (fara acest semn scrierea nu mai are loc)
// & - inseamna adresa la variabila data (punem datele la adresa variabilei)
/* Line 5 declares a char array — a string variable — named firstname. 
The number in the brackets indicates the size of the array, 
or the total number of characters that can be stored there. 
The array isn’t assigned a value, so it’s created empty. 
Basically, the statement at Line 5 sets aside storage for up to 15 characters.
The scanf() function in Line 8 reads a string from standard input and stores it in the firstname array. 
The %s conversion character directs scanf() to look for a string as input, 
just as %s is a placeholder for strings in printf()'s output.
*/