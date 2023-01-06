#include "InsertSort.h"

InsertSort::InsertSort()
{
	std::cout << "Initalize the Class: InsertSort" << std::endl;
}

InsertSort::~InsertSort()
{
	std::cout << "Destory the Class: InsertSort" << std::endl;
}

void InsertSort::sort(int arr[], int N)
{
	int i, j;
	for (i = 1; i < N; i++)
	{
		for (j = i - 1; j >= 0; j--)
		{
			if (arr[i] > arr[j])
			{
				break;
			}
		}
		int temp = arr[i];
		for (int k = i - 1; k > j; k--) {
			arr[k + 1] = arr[k];
		}
		arr[j + 1] = temp;
	}
}
