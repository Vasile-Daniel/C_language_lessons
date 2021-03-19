#include <stdio.h>
/* 
long int -2147483648 ... +2147483647
%li
pe unele sisteme de operare: 4 bye  
pe alte sisteme de operare: 8 byte 
unsigned long int 0 ... 4294967295
%lu
4 byte 
8 byte 
*/

int main()
{
	long int nr;
	long unsigned int no;
	////////////////////////////////////////////
	nr = -2147483648;
	printf("Min Long int is %li\r\n", nr);
	nr = 2147483647;
	printf("Max Long int is %li\r\n", nr);
	printf("The size of long int is %li\r\n", sizeof(nr));
	////////////////////////////////////////////
	no = 0;
	printf("Min Long int is %lu\r\n", no);
	no = 4294967295;
	printf("Max Long int is %lu\r\n", no);
	printf("The sise of unsigned long int is %li\r\n", sizeof(no));

	return 0;
}