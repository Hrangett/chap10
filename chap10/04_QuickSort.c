#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void Swap(int* arr, int idx1, int idx2)
{
	int temp = arr[idx1];
	arr[idx1] = arr[idx2];
	arr[idx2] = temp;
}

int Partition(int* arr, int left, int right)
{
	int pivot = arr[left];	//피벗의 위치는 가장 왼족
	int low = left + 1;
	int high = right;

	while (low <= high)		//교차되지 않을떄까지 반복
	{
		//피벗보다 큰 값을 찾는 과정
		while (pivot > arr[low])
		{
			low++;//low를 오른쪽으로 이동
		}

		while (pivot < arr[high])
		{
			high--;
		}

		if (low <= high)
		{
			Swap(arr, low, high);
		}
	}
	Swap(arr, left, high);
	return high;
}

void QuickSort(int* arr, int left, int right)
{
	if (left <= right)
	{
		int pivot = Partition(arr, left, right);	//둘로 나눠보자.
		QuickSort(arr, left, pivot-1);	//왼쪽영역을 정렬
		QuickSort(arr, pivot+1, right);	//오른쪽 영역을 정렬
	}
}

void QuickSort2(int* parr, int left, int right)
{
	int lidx = left, ridx = right;
	int temp;
	int pivo = (left + right) / 2;

	while (lidx <= ridx)
	{
		while (parr[lidx] <= parr[pivo])
			lidx++;
		while (parr[ridx] >= parr[pivo])
			ridx--;

		if (lidx < ridx)		//교차하지 않았으면
		{
			temp = parr[lidx];
			parr[lidx] = parr[ridx];
			parr[ridx] = temp;
		}

		lidx++;
		ridx--;
	}
	if (left < ridx)	//교차했을경우
	{
		QuickSort2(parr, left, ridx);
	}
	if(lidx<right)
		QuickSort2(parr, lidx, right);

}

int main(void)
{

	int arr[7] = { 3,2,4,1,7,6,5 };
	//int arr[3] = { 3,3,3 };

	int len = sizeof(arr) / sizeof(int);
	int i;

	//QuickSort(arr, 0, sizeof(arr) / sizeof(int) - 1);
	QuickSort2(arr, 0, sizeof(arr) / sizeof(int) - 1);

	for (i = 0; i < len; i++)
		printf("%d", arr[i]);

	printf("\n");
	return 0;
}