#include <stdio.h>

int main()
{
	// constante: pi, exp
	// aplicam constante cand din exterior nu dorim sa modificam constanta 
	// de exemplu pentru parole 
	const float pi = 3.14; // acest numar nu se mai poate schimba 
	float raza, area;
	printf("Insert radius [cm]:");
	scanf("%f", &raza);

	
	area = pi * raza * raza;
	printf("Area of the circle : %f cm",  area);

	return 0;
}