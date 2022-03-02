#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num = 0;
	printf("몇단의 피라미드를 만들까요?\n");
	printf("->");
	scanf("%d",&num);



	for (int i = 0; i < num; i++)
	{
		//for (int j = num-1 ; j >= i ; j--)
		for (int j = i; j < num - 1; j++)
		{
			printf(" " );
		}
		for (int k = 0; k < (2 * i) + 1; k++)
		{
			printf("*");
		}

		//for (int j = num - 1; j >= i; j--)
		//{
		//	printf(" ");
		//}

		printf("\n");
	}
}