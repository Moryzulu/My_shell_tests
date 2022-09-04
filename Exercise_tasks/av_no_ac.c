#include <stdio.h>
/**
 * Main - function to print argv without using argc
 * @av: argumnt value
 * @ac: argument count
 *
 * Return: av
 */ 
int main(int av, char **ac)
{

	(void) ac;

        if (av >= 0)
        {
       
	  	printf("%d\n", av);
	}
        return (av);
}
