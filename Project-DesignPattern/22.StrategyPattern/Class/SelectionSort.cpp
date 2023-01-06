#include "SelectionSort.h"

SelectionSort::SelectionSort()
{
	std::cout << "Initalize the Class: SelectionSort" << std::endl;
}

SelectionSort::~SelectionSort()
{
	std::cout << "Destory the Class: SelectionSort" << std::endl;
}

void SelectionSort::sort(int arr[], int N)
{
	int i, j, k;
	for (i = 0; i < N; i++)
	{
		k = i;
		for (j = i + 1; j < N; j++)
		{
			if (arr[j] < arr[k])
			{
				k = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[k];
		arr[k] = temp;
	}
}
