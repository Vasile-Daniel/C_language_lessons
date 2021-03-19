#include <stdio.h>

// declar functia 'get_some_char()'
char get_some_char()
{
	printf("eu sunt in functia get_some_char.\r\n");
	return 'W';
}
///////////////////////////////////////////////////////
// declar functia 'increment()'
int increment(int to_increment, int x)
{
	int result;

	result = to_increment + x;
	return result; 
}

int main()
{
	char c;
	int i = 10
	// apelez functia get_some_char
	// atribui literei c functia get_some_char (instantiez)
	c = get_some_char();
	i = increment(i,4);


	printf("%c", c);
	return 0; 
}