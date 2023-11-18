#define _CRT_SECURE_NO_WARNINGS

#include "function.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 10000

void BUBBLE(int arr[SIZE])
{
	for (int i = 0; i < SIZE - 1; i++)
	{
		for (int j = 0; j < SIZE - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	//for (int j = 0; j < SIZE - 1; j++)
	//{
	//	printf("%d ", arr[j]);
	//}
	//printf("\n")ж
}
int randomly(int* array, int* array2)
{
	int cmp;
	for (int i = 0; i < SIZE; i++)
	{
		array[i] = rand() % 100;
		array2[i] = array[i];
		if (array[i] == array2[i]) cmp = 1;
		else cmp = 0;
	}
	return cmp;
}
void swap(int array[], long pos1, long pos2)
{
	long tmp;
	tmp = array[pos1];
	array[pos1] = array[pos2];
	array[pos2] = tmp;
}
void qs_sort(int array[], long start, long end)
{
	long head = start, tail = end - 1, tmp;
	long diff = end - start;
	long pe_index;
	// якщо залишилося менше двох елементів – кінець рекурсії
	if (diff < 1) return;
	if (diff == 1)
		if (array[start] > array[end]) {
			swap(array, start, end);
			return;
		}
	// пошук індексу розділяючого елементу pe_index
	long m = (start + end) / 2;
	if (array[start] <= array[m]) {
		if (array[m] <= array[end]) pe_index = m;
		else if (array[end] <= array[start]) pe_index = start;
		else pe_index = end;
	}
	else {
		if (array[start] <= array[end]) pe_index = start;
		else if (array[end] <= array[m]) pe_index = m;
		else pe_index = end;
	}
	long pe = array[pe_index]; // сам розділяючий елемент
	swap(array, pe_index, end);

	while (1) {
		while (array[head] < pe)
			++head;
		while (array[tail] > pe && tail > start)
			--tail;
		if (head >= tail) break;
		swap(array, head++, tail--);
	}
	swap(array, head, end);
	long mid = head;
	qs_sort(array, start, mid - 1); // рекурсивний виклик для 1-ої підмножини
	qs_sort(array, mid + 1, end); // рекурсивний виклик для 2-ої підмножини

}
int COMPEAR(int ar1[SIZE], int ar2[SIZE])
{
	int comp;
	for (int i = 0; i < SIZE; i++)
	{
		if (ar1[i] == ar2[i]) comp = 1;
		else comp = 0;
	}
	return comp;
}
