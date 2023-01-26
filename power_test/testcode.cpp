#include<stdio.h>
#include "ghlib.h"
#include "ghlib.c"
int main()
{
	int i = 0;
	int linecount = 0;
	char data[100][100];
	char str[100] = "I*am*am*student";
	INDEXES result;
	result = findAllstr_k(str, "am", strlen_k(str), strlen_k("am"));
	if (result.status)
	{
		for (int i = 0; i < result.indexes_size; i++)
		{
			printf("%d/t", result.indexes[i]);
		}
	}
	
	return 0;
}