#include <stdio.h>

// sizeof() - operator 
/* 
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
overflow 
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
int -2147483648 ... +2147483647 (2 miliarde )
%d
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
datele int ocupa 4 byte (4 octeti)= 32 biti 
1 byte = 8 biti 
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
Unsigned Integers 0 .. 4294967295 (4 miliarde ....)
%u 
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
*/


int main()
{
////////////////////////////////////////////////////////
	int nr; 
	unsigned int u_nr;
////////////////////////////////////////////////////////
	nr = -2147483648;
	u_nr = 0;
	printf("min int is %d\r\n", nr);
	printf("min u int is %u\r\n", u_nr);
///////////////////////////////////////////////////////
	// daca dau +2147483648, nu imi va schimba valoarea, 
	// pt ca este mai mare decat maximum admis
///////////////////////////////////////////////////////
	nr = +2147483647;  
	u_nr = 4294967295;
	printf("max int is %d\r\n", nr); 
	printf("max u int is %u\r\n", u_nr);
	printf ("The size of nr(int) is %d bytes.", sizeof(nr));
	return 0;
}