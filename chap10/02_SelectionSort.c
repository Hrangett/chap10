#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void SelSort(int* arr, int n)
{
	int i, j;
	int maxIdx;
	int temp;

	for (i = 0; i < n - 1; i++)
	{
		maxIdx = i;
		printf("%d : %d\n", i, arr[i]);
		for (j = i + 1; j < n; j++)		//ÃÖ¼Ú°ª Å½»ö
		{
			if (arr[j] < arr[maxIdx])
			{
				maxIdx = j;

			}

		}
		temp = arr[i];
		arr[i] = arr[maxIdx];
		arr[maxIdx] = temp;
		printf("%d : %d\n", maxIdx, arr[maxIdx]);
	}

}
int main(void)
{

	int arr[4] = { 3,4,2,1 };
	
	SelSort(arr, sizeof(arr) / sizeof(int));

	for (int i = 0; i < 4; i++)
		printf("%d", arr[i]);

	return 0;
}