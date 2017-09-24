// Statistics.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#pragma warning ( disable : 4996 )
#include <stdio.h>
#include <string.h>


int main()
{
	char N[1001];
	scanf("%s", N);
	getchar();
	int numbers[10][2];
	for (size_t i = 0; i < 10; i++)
	{
		numbers[i][0] = i;
		numbers[i][1] = 0;
	}
	for (size_t i = 0; i < strlen(N); i++)
	{
		for (size_t j = 0; j < 10; j++)
		{
			int number = N[j] - 48;
			if (j == number)
			{
				numbers[j][1]++;
				break;
			}
		}
	}
	int flag = 1;
	for (size_t i = 0; i < 10; i++)
	{
		if (numbers[i][1] != 0)
		{
			if (flag == 1)
			{
				printf("%d:%d", numbers[i][0], numbers[i][1]);
				flag = 0;
			}
			else
			{
				printf("\n");
				printf("%d:%d", numbers[i][0], numbers[i][1]);
			}
		}
	}
    return 0;
}

