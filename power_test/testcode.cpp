#include<stdio.h>
#include "ghlib.h"
#include "ghlib.c"
int main()
{
	int linecount = 0;
	char data[100][100];
	char str[100] = "I*am*a*student";
	split_k(data, str, '*', strlen_k(str),&linecount);
	for (int i = 0; i < linecount; i++)
	{
		puts(data[i]);
	}
	return 0;
}