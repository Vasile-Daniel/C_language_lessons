#include <stdio.h>
/* 
short int -32768 ... +32767
%hi
2 byte 
se considera litera "h" (a doua litera din cuvantul 'short')
litera 's' este deja alocata pentru date de tip 'string'

unsigned short int 0 ... 65535
%hu 
2 byte 
*/

int main()
{
	short nr;
	unsigned short no;
	nr = -32768;
	printf("min short is: %hi\r\n", nr);
	nr = 32767;
	printf("max short is: %hi\r\n", nr);
	printf("size of short is %d\r\n", sizeof(short));

	////////////////////////////////////////////
	no = 0;
	printf("min unsigned short is: %hu\r\n", no);
	no = 65535;
	printf("max unsigned short is: %hu\r\n", no);
	printf("size of short is %d\r\n", sizeof(short));
	 return 0;
}

