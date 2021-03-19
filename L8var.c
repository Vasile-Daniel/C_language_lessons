/*
####               #####

	-> Variabile <- 

########################
*/

#include <stdio.h>

int main()
{
	// nu putem initializa doua variabile cu acelasi nume, 
	// pentru ca compilatorul va fi "ametit", nu va sti la care variabila sa se refere 
	int box; // este o zona din memoria ram (memoria operativa) care pastreaza date
	int my_var = 390;
	/*
	// daca nu initializez 'box' cu o valoare, o sa imi afiseze valoare de memorie 
	// este recomandat sa se initializeze variabilele 
	printf("0. Memory place: %d\r\n", box);
	box = 101; // egal inseamna 'atribuire'  
	printf("1. We have %d apples.\r\n", box);
	box = 41; // se rescrie valoare, cutia data contine doar o singura data (valoare)
	printf("2. We have %d apples.\r\n", box);
	*/
	printf("box = %d\t my_var = %d.", box, my_var);
	return 0;
}