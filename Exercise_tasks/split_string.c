#include <stdio.h>
#include <string.h>

int main()
{
	char str_to_strip [50] = {"Now kay made me in trouble, I am mad at her"};
	char *str;

	str = strtok(str_to_strip, ",");
	while (str != NULL)
	{
	printf("%s\n", str);
	str = strtok(NULL, ",");
	}
	return (0);
}
