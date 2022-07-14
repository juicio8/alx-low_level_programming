#include <stdio.h>
#include "main.h"

int main(void)
{
	char str1[] = "love";
	char str2[] = "good";
	char *ptr;

	ptr = _strcat(str1, str2);
	printf("%s", str1);
	return (0);
}
