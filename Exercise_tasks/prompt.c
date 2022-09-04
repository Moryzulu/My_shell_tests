#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *input;
	size_t size;


	printf("&");
	input = (char *) malloc (size);
	getline(&input, &size, stdin);

	printf("%s", input);
	
	return (0);

}
