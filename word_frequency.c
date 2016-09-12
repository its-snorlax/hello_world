#include <stdio.h>
#include <stdlib.h>
void main()
{
	char string[1000] , frequency;
	int i , count = 0;
	printf ("Enter string\n");
	gets (string);
	printf ("Enter the word to find number\n");
	scanf ("%c",&frequency);
	for (i = 0; i < string[i] ; i++)
	{
		if (frequency == string[i])
		{
			count++;
		}
	}
	printf("%d \n", count);
}