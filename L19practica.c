#include <stdio.h>
int main(){
	/*
	int x, y, z; // 4 byte = 32 octeti 
	unsigned short us; // 2 byte, %hu
	printf("introdu un numr (unsigned short): ");
	scanf("%hu", &us);
	x = y = 5; // x = 5; y=5 
	printf("%d modulo %d: %d. \r\n", us, x, us % x);
	printf("%d modulo %d: %d. \r\n", x,us, x % us);
	*/
	///////////////////////////////////////////////////////////
	/*
	float f;
	int i;
	f = 3.14;
	i = f; // conversie implicita din tipul de date float in tipul de date int 
	printf("%d", i); // se truncheaza la 3 
	printf("%d", (int)f); // conversie din float in int 
	*/
	////////////////////////////////////////////////////////

	int i, res;
	

	/*
	// increment
	i = 0;
	++i; // i = i +1 = 0 + 1 = 1

	res = ++i; // i = i + 1 = 1 + 1 = 2
	printf("res = %d\r\n ", res);
	printf("i = %d\r\n ", i);
	res = i++; // i = i+ 1 = 2 +
	printf("res  = %d\r\n", res);
	printf("i = %d\r\n ", i);
	*/
	// decrement
	i = 1;
	--i; 

	res = --i; 
	printf("res = %d\r\n ", res);
	printf("i = %d\r\n ", i);
	res = i--; 
	printf("res  = %d\r\n", res);
	printf("i = %d\r\n ", i);




	return 0;
}

/* 
/////////////////////////////
5 modulo 13
Cel mai mare numar pana la 5 care se va imparti exact la 13 ese 0
0/13 = 0.0
5-0 = 5
rezultatul va fi 5 
////////////////////////////
13 modulo 5
cel mai mare numar pana la 13 care se imparte exact la 5 este 10
10/5 = 0.0
13 - 10 = 3
rezultatul va fi 3 
///////////////////////////////////////

type casting 
*/


