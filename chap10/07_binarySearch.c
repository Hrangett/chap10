/* ����Ž�� */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int BSearch(int* ary, int alen, int akey)
{
	//Sleep(500);
	printf("����ã����..01\n");
	
	int first = 0;
	int last = alen - 1;
	int ben;
	
	while (first<=last)
	{
		ben = (last + first) / 2;
		printf("��=> %d\n", ben);
		printf("����ã����..02\n");

		if (ary[ben] == akey)
			return ben;
		else
		{
			printf("����ã����..03\n");
			if (ary[ben] > akey)		
			{

				//ben = ben + (((last-ben)+1) / 2);
				last = ben - 1;
				//printf("��..!! %d\n", ben);
				//BSearch(ary, ben, akey);

			}
			else if (ary[ben] < akey)	
			{

				first = ben+1;
				//BSearch(ary, ben, akey);
			
			}

		}

	}
	return -1;
}

int main(void)
{
	int ary[] = { 1,3,4,5,7,8,9 };
	int len = sizeof(ary) / sizeof(ary[0]);
	int key, idx;

	printf("�˻��� �Է� : $");
	scanf("%d", &key, sizeof(key));
	idx = BSearch(ary, len, key);
	if (idx == -1)printf("No data\n");
	else printf("Key index : %d", idx);


	return 0;
}