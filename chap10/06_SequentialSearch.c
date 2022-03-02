/*순차탐색*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int LSearch(int* ary, int data, int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		printf("%d번째 탐색->%d\n",i, ary[i]);

		if (ary[i] == data)return data;
			
	}
	printf("=====\n");
	return NULL;
}

int main(void)
{
	int ary[] = { 1,5,9,3,8,6,2,4 };
	int num ;
	int res = 0;
	int len = (sizeof(ary) / sizeof(int));
	printf("찾을 숫자 : ");
	scanf("%d", &num);
	printf("\n");

	res = LSearch(ary, num, len);

	if (res == NULL)
		printf("데이터에 존재하지 않은 숫자입니다\n");
	else
		printf("%d의 값이 존재합니다.\n", res);
	
	

	return 0;
}